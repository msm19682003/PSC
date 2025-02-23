#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


vector<ll> adj[100010];
bool vis[100010];
ll n,m,total=0;
ll cc[100010];

void dfs(ll s,ll sum)
{
    if(vis[s])
        return;

    vis[s]=1;

    if(cc[s])
        sum++;
    else
        sum=0;

    if(sum>m)
        return;

    if(s!=1 && adj[s].size()==1)
    {
        total++;
    }

    for(int i=0;i<adj[s].size();i++)
    {
        dfs(adj[s][i],sum);
    }
}

void solve() {
    ll i,j,k;
    ll u,v;

    memset(vis,0,sizeof(vis));

    cin>>n>>m;

    for(i=1;i<=n;i++)
        cin>>cc[i];

    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0);

    cout<<total;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}