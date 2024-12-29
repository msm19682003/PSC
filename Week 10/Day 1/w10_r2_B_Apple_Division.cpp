#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll tot = 0;
    for(ll i = 0; i<n; i++){
        cin >> v[i];
        tot+=v[i];
    }

    ll mn = INT_MAX;
    for(ll i = 0; i< 1<<n; i++){
        ll sum = 0;
        for(ll j = 0; j<n;j++){
            if(i & 1<<j){
                sum+=v[j];
            }
        }
        ll dif = abs (tot - 2 * sum);
        mn = min(mn, dif);
    }
    cout << mn << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}