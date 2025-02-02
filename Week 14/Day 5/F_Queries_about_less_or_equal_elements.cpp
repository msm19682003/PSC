#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    ll a,b;
    ll i,j,k;

    cin>>a>>b;
    ll x[a],y[b];

    for(i=0;i<a;i++)
        cin>>x[i];

    for(i=0;i<b;i++)
        cin>>y[i];

    sort(x,x+a);

    for(i=0;i<b;i++)
    {
        cout<<upper_bound(x,x+a,y[i])-x<<" ";
    }

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}