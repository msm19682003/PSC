#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;

    ll f=abs(a-1);
    ll s=abs(b-n)+abs(n-1);

    if(f<s)
    {
        cout<<1<<endl;
    }
    else if(s<f)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<3<<endl;
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







