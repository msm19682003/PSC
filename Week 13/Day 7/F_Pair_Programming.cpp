#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    vector<int> ans;
    while (i < n || j < m)
    {
        if (i < n && j < m)
        {
            if (a[i] == 0)
            {
                ans.pb(0), i++, k++;
            }
            else if (b[j] == 0)
            {
                ans.pb(0), j++, k++;
            }
            else
            {
                if (a[i] < b[j] && a[i] <= k)
                {
                    ans.pb(a[i]), i++;
                }
                else if (a[i] >= b[j] && b[j] <= k)
                {
                    ans.pb(b[j]), j++;
                }
                else
                {
                    cout << -1;nl;
                    return;
                }
            }
        }
        else if (i < n)
        {
            if (a[i] == 0)
            {
                ans.pb(0), i++, k++;
            }
            else
            {
                if (a[i] <= k)
                {
                    ans.pb(a[i]), i++;
                }
                else
                {
                    cout << -1;nl;
                    return;
                }
            }
        }
        else if (j < m)
        {
            if (b[j] == 0)
            {
                ans.pb(0), j++, k++;
            }
            else
            {
                if (b[j] <= k)
                {
                    ans.pb(b[j]), j++;
                }
                else
                {
                    cout << -1; nl;
                    return;
                }
            }
        }
    }
    for (auto i : ans)
    {
        cout << i << sp;
    }
    nl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}