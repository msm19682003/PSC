#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;

ll n, k;
ll a[200005];

bool check(ll m) {
    ll r = 0;
    for (ll i = 0; i < n; i++) {
        r += m / a[i];
        if (r >= k) return true;
    }
    return false;
}

void solve() {
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 1, h = 1e18, ans = h;

    while (l <= h) {
        ll m = (l + h) / 2;
        if (check(m)) {
            ans = m;
            h = m - 1;
        } 
        else {
            l = m + 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    // cin >> t; while (t--) 
    solve();
    
    return 0;
}
