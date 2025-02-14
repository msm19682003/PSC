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
    ll x, n, m, N, M;
    cin >> x >> n >> m;
    
    N = n;
    M = m;
    ll ans = x, ans1 = x;
    bool tag = false;
    
    while (n-- && ans > 0) {
        ans = (ans / 2) + 10;
        if (ans <= 0) {
            tag = true;
            break;
        }
    }
    
    while (m-- && ans > 0) {
        ans -= 10;
        if (ans <= 0) {
            tag = true;
            break;
        }
    }
    
    while (M-- && ans1 > 0) {
        ans1 -= 10;
        if (ans1 <= 0) {
            tag = true;
            break;
        }
    }
    
    while (N-- && ans1 > 0) {
        ans1 = (ans1 / 2) + 10;
        if (ans1 <= 0) {
            tag = true;
            break;
        }
    }
    
    if(tag){
        py;
    }
    else{ 
        pn;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
