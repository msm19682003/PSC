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
    int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i: v) {
            cin >> i;
        }
        int s = 0, e = 0;
        int l = 0, r = n - 1;
        while(s < k && l < n) {
            s += (v[l] == v.front());
            l++;
        }
        while(e < k && r >= l) {
            e += (v[r] == v.back());
            r--;
        }

        if((s == k && e == k) || (v.front() == v.back() && (s + e) >= k)) {
            py;
        } else {
            pn;
        }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}