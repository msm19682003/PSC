#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b)
{
    return __gcd(a,b);
}

ll LCM(ll a, ll b)
{
    return ((a*b)/__gcd(a,b));
}

void solve()
{
    ll n,a,b,p,q,i,s=0;
    cin>>n>>a>>b>>p>>q;
    
    ll ol=(n/LCM(a,b));
    ll x=(n/a)-ol;
    ll y=(n/b)-ol;

    s=(x*p) + (y*q) + (ol*max(p,q));

    cout<<s<<endl;
}

int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
   //}
   return 0;
}