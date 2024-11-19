#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll aa=s/n;
    ll bb=s%n;
    ll ss=(a*n)+b;
    if(bb<=b && 1ll*ss>=s)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"NO\n";
    }

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






