#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

pair<vector<ll>, ll> mergesort(vector<ll> w) {
    ll n = w.size();
    if (n <= 1) return {w, 0};

    ll xsz = n / 2, ysz = n - xsz;
    vector<ll> x(w.begin(), w.begin() + xsz);
    vector<ll> y(w.begin() + xsz, w.end());

    auto rmx = mergesort(x);
    auto rmy = mergesort(y);
    x = rmx.first;
    y = rmy.first;

    ll a = 0, b = 0, cnt = 0;
    vector<ll> out(n);
    for (ll p = 0; p < n; p++) {
        if (a < xsz && b < ysz) {
            if (y[b] < x[a]) {
                out[p] = y[b++];
                cnt += (xsz - a);
            } else {
                out[p] = x[a++];
            }
        } else if (a == xsz) {
            out[p] = y[b++];
        } else {
            out[p] = x[a++];
        }
    }

    return {out, rmx.second + rmy.second + cnt};
}

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    vector<ll> w(n);
    for (ll i = 0; i < n; i++) w[i] = v[i].second;
    cout << mergesort(w).second << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}