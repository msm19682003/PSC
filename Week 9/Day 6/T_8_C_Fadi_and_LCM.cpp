#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

ll gcd (ll a, ll b){
    return __gcd(a, b);
}

ll lcm (ll a, ll b){
    return (a/gcd(a,b)) * b;
}

void solve() {
    ll n;
    cin >> n;
    
    ll ans = 1;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0 && lcm(i, n/i) == n){
            ans = i;
        }
    }
    cout << ans << sp << n/ans << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}