#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

vector<ll> primeFactor(ll n){
    vector<ll> fact;
    for (ll i = 2; i * i <= n; i++){
        ll cnt = 0;
        while (n % i == 0){
            cnt++;
            n /= i;
            fact.pb(i);
        }
    }
    if (n > 1)
        fact.pb(n);
    return fact;
}

void solve(){
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++){
        vector<ll> primes = primeFactor(arr[i]);
        for (auto p : primes)
            mp[p]++;
    }

    for (auto i : mp){
        if (i.second % n != 0){
            pn;
            return;
        }
    }

    py;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
