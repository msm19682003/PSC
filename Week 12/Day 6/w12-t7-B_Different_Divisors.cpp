#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = n + 1;; i++){
        bool find = true;
        for (ll j = 2; j * j <= i; j++){
            if (i % j == 0){
                find = false;
                break;
            }
        }

        if (find){
            a.push_back(i);
            break;
        }
    }

    for (ll i = a.back() + n;; i++){
        bool find = true;
        for (ll j = 2; j * j <= i; j++){
            if (i % j == 0){
                find = false;
                break;
            }
        }

        if (find){
            a.push_back(i);
            break;
        }
    }

    cout << min(a[0] * a[1], a[0] * a[0] * a[0]) << endl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}