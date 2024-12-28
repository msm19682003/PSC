#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int>v(n);
    int mx = -1;
    for(int i = 0; i<n;i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    ll ans = 0;
    ll gcd = 0;
    for(int i = 0; i<n; i++){
        if (v[i] != mx) {
            ll diff = mx - v[i];
            ans += diff;
            gcd = __gcd(gcd, diff);
        }
    }

    cout << ans / gcd << sp << gcd << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}