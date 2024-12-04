#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x,y,i,j,ans;
    cin>>x>>y;
    ans=(y+1)/2;
    ll total=ans*15;
    ll sin=total-(y*4);
    if(sin>=x)
    {
        ans=ans;
    }
    else
    {
        x-=sin;
        if(x<=15)
        {
            ans++;
        }
        else
        {
            ans+=(x+14)/15;
        }
        
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