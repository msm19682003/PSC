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
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll idx = 0, cnt=0;
    for (ll i = 0; i < b.size(); i++)
    {
        if (b[i] == a[idx])
        {
            ++cnt;
            ++idx;
        }
        if (idx >= a.size())
        {
            break;
        }
    }

    cout << cnt << endl;
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