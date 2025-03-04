#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl '\n'
#define pb push_back
using namespace std;


void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll sec = min(x, y);
    ll ans = n / sec;
    if (n % sec != 0)
    {
        ans++;
    }
    cout << ans << nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}