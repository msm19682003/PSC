#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll r=4-(x+y+z);
    if((r+x)>z)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

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


