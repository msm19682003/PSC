#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,f,b,m,mn;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    f=a[n-1]-a[2];
    b=a[n-3]-a[0];
    m=a[n-2]-a[1];
    mn=min(f,b);
    cout<<min(mn,m)<<endl;

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


