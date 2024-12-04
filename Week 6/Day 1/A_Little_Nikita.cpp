#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x,y,ans;
    cin>>x>>y;
    
    if(y>x)
    {
        cout<<"No\n"<<endl;
    }
    else
    {
        if((x-y)%2==0)
        {
            cout<<"Yes\n"<<endl;
        }
        else
        {
            cout<<"No\n"<<endl;
        }
        
    }
    
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