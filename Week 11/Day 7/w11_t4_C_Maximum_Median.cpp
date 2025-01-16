#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

ll n, k;
vector<ll> a;

bool isPossible(ll x)
{
    ll cnt = 0;
    for (ll i = n / 2; i < n; i++)
    {
        if (x - a[i] > 0)
        {
            cnt += x - a[i];
        }
        if (cnt > k)
        {
            return false;
        }
    }

    if (cnt <= k)
    {
        return true;
    }

    return false;
}

void solve()
{
    cin >> n >> k;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    ll low = 1, high = 2e9, ans = 0;

    while (low != high)
    {
        ll mid = (low + high + 1) / 2;

        if (isPossible(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low << endl;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}