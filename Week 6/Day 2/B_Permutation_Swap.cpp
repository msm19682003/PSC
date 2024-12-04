#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x,y,ans;
    cin>>n;
    ll a[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    y=0;
    for(i=0;i<n;i++)
    {
        if((i+1)!=a[i])
        {
            x=abs(a[i]-a[a[i]-1]);
            y=__gcd(y,x);
        }
    }
    
    cout<<y<<endl;
    
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