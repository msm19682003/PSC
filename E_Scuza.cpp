#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,q, i,j, ans=0;
    cin >> n>>q;
    ll a,k;
    vector<ll> pre,v;
    pre.push_back(0);
    for(i=0;i<n;i++)
    {
        cin>>a;
        pre.push_back(pre.back()+a);
        if(i==0)
        {
            v.push_back(a);
        }
        else
        {
            v.push_back(max(v.back(),a));
        }
    }
    

    for(i=0;i<q;i++)
    {
        cin>>k;
        ll it=upper_bound(v.begin(),v.end(),k)-v.begin();
        cout<<pre[it]<<" ";
    }
    cout<<endl;

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
