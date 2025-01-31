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
    ll n;
    cin >> n;
    
    vector<ll> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    map<ll, ll> mp;
    for(ll i = 0; i < n - 1; i++) {
        for(ll j = i + 1; j < n; j++) {
            mp[v[i] + v[j]]++;
        }
    }
    
    ll ans = 0;
    for(auto &[key, val] : mp) {
        ans = max(ans, val);
    }
    
    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}