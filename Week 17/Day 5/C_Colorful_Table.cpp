#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl '\n'
#define pb push_back
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    set<ll> se;
    vector<ll> l(k + 1, n + 1), r(k + 1, -1), sl, sr;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i];
        l[a[i]] = min(l[a[i]], i);
        r[a[i]] = i;
        se.insert(a[i]);
    }
    sl = l;
    sr = r;
    for (ll i = k - 1; i >= 1; i--)
    {
        sl[i] = min(sl[i], sl[i + 1]);
        sr[i] = max(sr[i], sr[i + 1]);
    }
    for (ll i = 1; i <= k; i++)
    {
        if (!se.count(i))
            cout << 0 << sp;
        else
            cout << 2 * (sr[i] - sl[i] + 1) << sp;
    }
    cout << nl;
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