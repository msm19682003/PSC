#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


vector<int> adj[100005];
int vis[100005], parent[100005], n, evenComponents = 0;

void reset() {
    memset(vis, 0, sizeof(vis));
    memset(parent, -1, sizeof(parent));
}

int dfs(int u) {
    vis[u] = 1;
    int cnt = 1;

    for (int nd : adj[u]) {
        if (nd == parent[u]) continue;

        if (!vis[nd]) {
            parent[nd] = u;
            cnt += dfs(nd);
        }
    }

    vis[u] = 2;
    if (cnt % 2 == 0) evenComponents++; 
    return cnt;
}

void solve() {
    cin >> n;

    if (n % 2 == 1) {
        cout << "-1\n";
        return;
    }

    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1); 
    cout << evenComponents - 1 << '\n';
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}