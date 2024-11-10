#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,m,h,l,i,j,res=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<int,int> mp;

    for(i=n-1;i>=0;i--)
    {
        if(mp[a[i]]!=1)
        {
            res++;
            mp[a[i]]=1;
        }
        else if(mp[a[i]]==1)
        {
            break;
        }
    }

    cout<<n-res<<endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}




