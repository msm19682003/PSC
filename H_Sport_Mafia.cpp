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
    ll m,n,i,j,k;
    cin>>n>>k;
    ll x=(n+k);
    ll cnt=0;

    while(x !=(cnt*(cnt+1))/2 )
    {
        cnt++, x--;
    }
    cout<<n-cnt<<endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}