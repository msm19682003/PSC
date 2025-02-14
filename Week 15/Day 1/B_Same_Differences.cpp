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
    int n;
    cin>>n;
    
    ll mx = 0;
    map<int,ll> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        mx += mp[x-i];
        mp[x-i]++;
    }
    cout<<mx; nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}