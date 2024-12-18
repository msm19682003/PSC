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
    ll n, ans = 0, cnt = 0, mx = 0, one = 0, zero = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            cnt++;
            zero = (i + 1);
        }
        else
        {
            ans += cnt;
            if (one == 0)
                one = (i + 1);
        }
    }

    mx = max(mx, ans);
    cnt = 0, ans = 0;
    if (zero > 0)
    {
        a[zero - 1] = 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
                cnt++;
            else
                ans += cnt;
        }
        mx = max(mx, ans);
        cnt = 0, ans = 0;
        a[zero - 1] = 0;
    }

    if (one > 0)
    {
        a[one - 1] = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
                cnt++;
            else
                ans += cnt;
        }
        mx = max(mx, ans);
    }
    cout << mx << endl;
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