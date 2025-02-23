#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


const int N = 1e5 + 1;
int n, s1 = 0, s2 = 0;
vector<vector<int>> g;

void DFS(int v, int p, int lvl) {
    if (lvl % 2 == 0) 
        s1++;
    else 
        s2++;

    for (int u : g[v]) {
        if (u != p) {
            DFS(u, v, lvl + 1);
        }
    }
}

void solve() {
    cin >> n;
    g.resize(n);

    for (int i = 0, a, b; i < n - 1; ++i) {
        cin >> a >> b;
        --a, --b; 
        g[a].push_back(b);
        g[b].push_back(a);
    }

    DFS(0, -1, 0);

    cout << (1LL * s1 * s2) - (n - 1); nl;

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}