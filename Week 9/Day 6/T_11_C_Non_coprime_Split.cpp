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
    ll l, r;
    cin >> l >> r;

    if (r < 4)
    {
        cout << -1 << endl;
        return;
    }

    if (l < r)
    {
        if (r % 2 == 0)
        {
            cout << 2 << sp << r - 2 << endl;
        }
        else
        {
            cout << 2 << sp << r - 3 << endl;
        }
        return;
    }

    if (r % 2 == 0)
    {
        cout << r / 2 << sp << r / 2 << endl;
    }
    else
    {
        ll i = 3; 
        while (i * i <= r)
        {
            if (r % i == 0)
            {
                cout << i << sp << r - i << endl;
                return;
            }
            i += 2; 
        }
        cout << -1 << endl; 
    }
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
