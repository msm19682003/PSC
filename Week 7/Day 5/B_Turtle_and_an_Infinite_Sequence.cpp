#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, i, j, k, l, p, q;
    cin >> n >> m;
    ll left = n - m, right = n + m, ans = 0;
    left = max(0ll, left);
    for (i = 40; i >= 0; i--)
    {
        if (((1ll << i) & left) == 0)
        {
            
            if ((1ll << i) & right)
            {
                for (j = i; j >= 0; j--)
                {
                    ans |= (1ll << j);
                }
                break;
            }
        }
        else
        {

            ans |= (1ll << i);
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}