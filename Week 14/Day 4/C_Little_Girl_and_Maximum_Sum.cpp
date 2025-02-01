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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), c(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        c[l - 1]++;
        c[r]--;
    }
    
    for (int i = 1; i < n; ++i) {
        c[i] += c[i - 1];
    }
    
    sort(a.begin(), a.end());
    c.pop_back(); 
    sort(c.begin(), c.end());
    
    ll answer = 0;
    for (int i = 0; i < n; ++i) {
        answer += (ll)a[i] * c[i];
    }
    
    cout << answer; nl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}