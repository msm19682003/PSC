#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,i;
    cin>>n;
    ll a[n],s=0,mx=0;
    map<ll,ll>mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx,mp[a[i]]);  
    }
ll ans=0;
while(mx<n)
{
    s=min(n-mx,mx);
    s++;
    ans+=s;

    mx*=2;
}
    cout<<ans<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}