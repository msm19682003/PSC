#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    ll n, c, d;
    cin >> n >> c >> d;

    vector<ll> a(n);
    for (ll p = 0; p < n; p++){
        cin >> a[p];
    }
    sort(a.rbegin(), a.rend());

    vector<ll> cs(n + 1, 0);
    for (ll p = 1; p <= n; p++){
        cs[p] = cs[p - 1] + a[p - 1];
    }

    if (d * a[0] < c){
        cout << "Impossible"; nl;
        return;
    }
    if (c <= cs[d < n ? d : n]){
        cout << "Infinity"; nl;
        return;
    }

    ll res(0), left(1), right(d);
    while (left <= right){
        ll mid = (left + right) / 2;
        ll stopA = (mid <= n) ? mid : n;
        ll stopB = (d % mid <= n) ? (d % mid) : n;
        ll sum = (d / mid) * cs[stopA] + cs[stopB];
        if (c <= sum){
            res = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    cout << res - 1; nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}