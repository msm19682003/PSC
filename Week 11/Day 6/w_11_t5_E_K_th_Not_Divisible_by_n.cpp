#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    ll n, k;
    cin >> n >> k;
    if(n>k){
        cout << k; nl;
        return;
    }
    else if(n == k){
        cout << n+1; nl;
        return;
    }
    else{
        ll m = n-1;
        ll slot = k/m;
        if(k%m == 0){
            slot--;
        }
        ll ans = (n*slot) + k - (m * slot);
        cout << ans; nl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}