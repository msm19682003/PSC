#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll a,b,n,s=0;
    cin>>a>>b>>n;
    ll x[n],i;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    s+=b-1;
    for(i=0;i<n;i++)
    {
        s+=min(x[i],a-1);
    }

    cout<<s+1<<endl;

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






