#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve(){
    ll n;
    cin >> n;

    deque<ll> res;
    for (ll i = 0; i <= __lg(n); i++){
        if ((n >> i) & 1){
            ll val = n - (1LL << i);
            if (val > 0){
                res.push_front(val);
            }
        }
    }
    res.push_back(n);

    cout << res.size() << endl;
    for(ll v : res){
        cout << v << sp;
    }
    nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}