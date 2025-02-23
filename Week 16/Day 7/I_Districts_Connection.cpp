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

int n, arr[5000];
bool vis[5000];
vector<pair<int, int>> edges;

void dfs(int node)
{
    if (!vis[node])
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[node] != arr[i] && (!vis[i] || !vis[node]))
            {
                edges.emplace_back(node + 1, i + 1);
                vis[i] = true;
                vis[node] = true;
            }
        }
    }
}

void solve()
{
    cin >> n;
    edges.clear();

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        vis[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if ((int)edges.size() == n - 1)
    {
        py;
        for (auto &e : edges)
        {
            cout << e.first << sp << e.second;
            nl;
        }
    }
    else
    {
        pn;
    }
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