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
    
    ll ans=0,sum=0,j=0;
    map<ll,ll> mp;
    
    for(i=0;i<n;i++)
    {
        while(j<n && ((int)mp.size()<k || mp.count(a[j])>0))
        {
            mp[a[j]]++;
            j++;
        }
        ans+=j-i;
        mp[a[i]]--;
        if(mp[a[i]]==0)
        {
            mp.erase(a[i]);
        }
    }

cout<<ans<<endl;
    return 0;
}