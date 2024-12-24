#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, d, i;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll g1=0, g2=0;
    for (i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, a[i]);
    }
    for (i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, a[i]);
    }
    bool flag = true;
    for (i = 0; i < n; i += 2)
    {
        if (a[i] % g2 == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << g2 << endl;
        return;
    }
    flag = true;
    for (i = 1; i < n; i += 2)
    {
        if (a[i] % g1 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << g1 << endl;
        return;
    }

    cout << 0 << endl;
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {

        solve();
    }

    return 0;
}
