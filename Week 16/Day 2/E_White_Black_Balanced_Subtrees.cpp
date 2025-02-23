#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

const int mx = 1e6 + 5;
vector<int> adj[mx];

struct NODE
{
    int black;
    int white;
};

vector<NODE> col;

void dfs(int cur, int par)
{
    for (auto u : adj[cur])
    {
        dfs(u, cur);
    }

    if (par != -1)
    {
        col[par].white += col[cur].white;
        col[par].black += col[cur].black;
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
        adj[i].clear();

    col.clear();

    int root = 1, a[n + 1];

    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        adj[a[i]].push_back(i);
    }

    string s;
    cin >> s;

    col.resize(n + 1);

    for (int i = 1; i <= n; i++)
        col[i] = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            col[i + 1].white++;
        else
            col[i + 1].black++;
    }

    dfs(root, -1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (col[i].white == col[i].black);
    }

    cout << ans << endl;
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