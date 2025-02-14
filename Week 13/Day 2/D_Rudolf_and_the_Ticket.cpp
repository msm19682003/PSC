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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> b(n);
    for (ll p = 0; p < n; p++)
    {
        cin >> b[p];
    }
    vector<ll> c(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i] + c[j] <= k)
            {
                total++;
            }
        }
    }

    cout << total; nl;
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