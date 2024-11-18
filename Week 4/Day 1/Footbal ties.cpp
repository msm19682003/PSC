#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,m,i,mn,mx,ans;
    cin>>n>>m;

    while(n>=3 && m>=3)
    {
        n-=3;
        m-=3;
    }
cout<<min(n,m)<<endl;

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





