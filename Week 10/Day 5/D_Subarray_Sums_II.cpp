#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k, i,x;
    cin >> n>>k;
    vector<ll> a;
    
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    
    ll ans=0,sum=0;
    map<ll,ll> mp;
    mp[0]++;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        ans+=mp[sum-k];
        mp[sum]++;
    }

cout<<ans<<endl;
    return 0;
}