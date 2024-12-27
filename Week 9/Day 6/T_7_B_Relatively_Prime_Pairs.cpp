#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    ll l,r;
    cin >> l >> r;

    py;
    for(ll i = l; i<=r;i+=2){
        cout << i << sp << i + 1 << endl;
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}