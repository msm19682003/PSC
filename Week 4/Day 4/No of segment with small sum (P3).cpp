#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,k,s=0,i,j,b,l,r;

    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    l=0,r=0;
   ll ans=0;

   while(r<n)
   {
       s+=a[r];
       if(s<=k)
       {
           ans+=(r-l+1);
       }
       else
       {
           while(s>k && l<=r)
           {
               s-=a[l];
               l++;
           }
           if(s<=k)
           {
               ans+=(r-l+1);
           }
       }
       r++;
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


