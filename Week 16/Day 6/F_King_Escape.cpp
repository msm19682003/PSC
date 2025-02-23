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
    ll n, a1, a2, b1, b2, t1, t2;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> t1 >> t2;

    bool flag = ((b1 < a1 && t1 < a1) || (b1 > a1 && t1 > a1)) &&
                ((b2 < a2 && t2 < a2) || (b2 > a2 && t2 > a2));

    cout << (flag ? "YES" : "NO"); nl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}