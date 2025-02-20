#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


const int N = 3e5 + 5;
int n, res;
string x;
vector<pair<int, char>> adj[N];

void dfs(int node, int cnt) {
    if (adj[node].empty()) {
        res = min(res, cnt);
        return;
    }
    for (auto &p : adj[node]) {
        dfs(p.first, cnt + (x[node - 1] != (p.second == 'l' ? 'L' : 'R')));
    }
}

void solve() {
    cin >> n >> x;
    res = n;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        int l, r;
        cin >> l >> r;
        if (l) adj[i].pb({l, 'l'});
        if (r) adj[i].pb({r, 'r'});
    }
    dfs(1, 0);
    cout << res; nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}