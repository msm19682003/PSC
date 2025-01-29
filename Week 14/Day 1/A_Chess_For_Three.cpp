#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%2!=0)
    {
        cout<<-1<<endl;
    }
    else if((a+b)<=c)
    {
        cout<<a+b<<endl;
    }
    else
    {
        cout<<(a+b+c)/2<<endl;
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