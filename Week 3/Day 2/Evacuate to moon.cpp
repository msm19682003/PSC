#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,m,h,l,i,j,res=0;
    cin>>n>>m>>h;
    ll c[n];
    ll e[m];
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    for(i=0;i<m;i++)
    {
        cin>>e[i];
    }
    sort(e,e+m);

    for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
    {
        ll mn;
        mn=min(c[i],e[j]);
        mn=min(c[i],mn*h);
        res+=mn;
    }

    cout<<res<<endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}




