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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int one, zero;
    one = zero = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            ans++;
            one += (a[i] == '1');
            zero += (a[i] == '0');
        }
    }
    int mn = min(one, zero);
    cout << ans - mn ; nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}