#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void dfs(ll cur, ll from, const vector<vector<ll>> &g, vector<ll> &desc) {
    if (cur > 1 && g[cur].size() == 1) { 
        desc[cur] = 1;
        return;
    }

    for (ll x : g[cur]) {
        if (x == from) continue;
        dfs(x, cur, g, desc);
        desc[cur] += desc[x];
    }
}

void solve() {
    ll n;
        cin >> n;
        vector<vector<ll>> g(n + 1);
        
        for (ll i = 1; i < n; i++) {
            ll x, y;
            cin >> x >> y;
            g[x].pb(y);
            g[y].pb(x);
        }

        vector<ll> d(n + 1, 0);
        dfs(1, 1, g, d);

        ll q;
        cin >> q;
        while (q--) {
            ll x, y;
            cin >> x >> y;
            cout << (d[x] * d[y]);nl;
        }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}