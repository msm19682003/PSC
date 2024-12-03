#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,i;
    cin>>n;
    ll a[n],s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=(n-2))
        {
            s+=a[i];
        }   
    }

    cout<<s-a[n-2]<<endl;
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