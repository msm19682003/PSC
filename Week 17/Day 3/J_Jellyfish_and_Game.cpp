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
    long n, m, k;
    cin >> n >> m >> k;
    long amn(1e9 + 7), amx(0), bmn(1e9 + 7), bmx(0);
    long long sa(0);
    for (long p = 0; p < n; p++)
    {
        long x;
        cin >> x;
        sa += x;
        amn = min(amn, x);
        amx = max(amx, x);
    }

    for (long p = 0; p < m; p++)
    {
        long x;
        cin >> x;
        bmn = min(bmn, x);
        bmx = max(bmx, x);
    }

    if (bmx > amn)
    {
        sa += (bmx - amn);
    }
    if (k % 2 == 0)
    {
        sa += (min(bmn, amn) - max(bmx, amx));
    }
    cout << sa << endl;
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