#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x,y,z=0,f=0,ans=0;
    cin>>n;
    ll a[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0,mx=0;
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        if(sum==a[i])
        {
            ans++;
        }
        else
        {
            ll v=sum-mx;
            v+=a[i];
            if(v==mx)
            {
                ans++;
            }
        }
        sum+=a[i];
    }
    
    cout<<ans<<endl;
    
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}