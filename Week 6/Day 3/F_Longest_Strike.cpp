#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k,ans = 0, res=0;
    cin >> n>>k;
    ll a[n], i, j;
    map<ll,ll> mp;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto [x,y]:mp)
    {
        if(y>=k)
        {
            v.push_back(x);
        }
    }

if(v.empty())
{
    cout<<"-1\n";
    return;
}

    sort(v.begin(),v.end());
    ll l=v[0],r=v[0],len=0;
    for(i=1;i<v.size();i++)
    {
        
        if(v[i]==v[i-1]+1)
        {
            r=v[i];
        }
        else
        {
            
            if(len<(r-l+1))
            {
                ans=l;
                res=r;
                len=r-l+1;
            }
            l=v[i];
            r=v[i];
        }
    }

    if(len<(r-l+1))
    {
        cout<<l<<" "<<r<<endl;
    }
    else
    {
        cout<<ans<<" "<<res<<endl;
    }
    
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}