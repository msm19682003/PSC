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

void solve()
{
    cin >> n >> k;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    // sort(a.begin(), a.end());

    ll low = 0, high = 2e9;

    while (low < high)
    {
        ll mid = low + (high - low + 1)/ 2;
        ll  ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += max(mid - a[i], 0LL);
        }
        if (ans <= k)
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
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}