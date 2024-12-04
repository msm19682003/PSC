#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x,y,z=0,f=0,ans;
    cin>>n;
    ll a[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    y=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>0)
        {
            y+=a[i];
            f=1;
        }
        if(f==1 && a[i]==0)
        {
            z++;
        }
    }
    
    cout<<y+z<<endl;
    
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