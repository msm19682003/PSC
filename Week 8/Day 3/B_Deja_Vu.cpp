#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int brr[q];
    for (int i = 0; i < q; i++)
    {
        cin >> brr[i];
    }

    set<int> st;
    for (int i = 0; i < q; i++)
    {
        if (!st.count(brr[i]))
        {
            st.insert(brr[i]);
            for (int j = 0; j < n; j++)
            {
                if (v[j] % (1 << brr[i]) == 0)
                {
                    v[j] += (1 << (brr[i] - 1));
                }
            }
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

int main()
{
    fast;
    int t;
    cin >> t; while (t--)
    solve();
    return 0;
}