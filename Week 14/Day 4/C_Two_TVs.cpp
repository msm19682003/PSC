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
    vector<pair<ll, ll>> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a.begin(), a.end());
    pair<ll, ll> uno = {0, 0}, dos = {0, 0};
    
    for (ll i = 0; i < n; i++) {
        if (uno.second < a[i].first){
            uno = {0, 0};
        }
        if (dos.second < a[i].first){
            dos = {0, 0};
        }

        if (uno.second == 0){
            uno = a[i];
        }
        else if (dos.second == 0){
            dos = a[i];
        }
        else{
            pn;
            return;
        }
    }
    
    py;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}