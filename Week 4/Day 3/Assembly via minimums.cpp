#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,i,j,b;

    cin>>n;

    b=n*(n-1)/2;
    ll a[b];

    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    sort(a,a+b);



    vector<ll> v;

    i=0;
    ll d=1;
    while(i<=b && d<n)
    {
        v.push_back(a[i]); /// -2 -2 -2 -2 0 0 0 0 0 3
        i+=(n-d);          /// 0   1  2  3 4 5 6 7 8 9
        d++;
    }

    for(auto ele:v)
    {
        cout<<ele<<" ";
    }

    cout<<a[b-1]<<endl;


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








