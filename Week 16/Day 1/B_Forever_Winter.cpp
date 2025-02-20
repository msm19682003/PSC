#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);

    for (int i = 1; i <= m; i++)
    {
        ll a, b;
        cin >> a >> b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    ll oneOfGoodNode = -1, x = 0, y = 0;

    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() == 1)
        {
            oneOfGoodNode = adj[i][0];
            y = adj[adj[i][0]].size();
        }
    }

    for (auto adjNode : adj[oneOfGoodNode])
    {
        ll k = adj[adjNode].size();
        x = max(x, k);
    }

    cout << x << sp << (y - 1);nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}