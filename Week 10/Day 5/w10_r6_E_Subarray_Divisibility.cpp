#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, i,x;
    cin >> n;
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
        sum+=a[i]%n;
        sum=(sum+n)%n;
        ans+=mp[sum];
        mp[sum]++;
    }

cout<<ans<<endl;
    return 0;
}