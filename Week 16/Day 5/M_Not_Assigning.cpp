#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
map<pair<int, int>, int> mp;

void dfs(int u, int prev) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            int val = (prev == 2 ? 3 : 2);
            mp[make_pair(u,v)] = val;
            mp[make_pair(v,u)] = val;
            dfs(v, val);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n);
    vector<pair<int, int>> edges(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges[i] = make_pair(u, v);
    }
    int start = -1;
    for (int u = 0; u < n; u++) {
        if ((int) adj[u].size() > 2) {
            cout << -1 << "\n";
            return;
        }
        if (adj[u].size() == 1) {
            start = u;
        }
    }
    mp.clear();
    vis = vector<bool>(n, false);
    dfs(start, 3);
    for (int i = 0; i < n - 1; i++) {
        cout << mp[make_pair(edges[i].first, edges[i].second)] << " ";
    }
    nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}