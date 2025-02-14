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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll ans = 0;
        multiset<int> s;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) {
                s.insert(v[i - 1] - v[i]);
                v[i] = v[i - 1];
            }
        }
        
        int sz = s.size();
        ll sum = 0;
        for (auto& i : s) {
            ll cur = i - sum;
            ans += cur * (sz + 1);
            sz--;
            sum = i;
        }
        cout << ans; nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}