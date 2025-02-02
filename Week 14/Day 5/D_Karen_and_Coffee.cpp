#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;
const int N = 200005;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> f(N, 0);
    
    while (n--) {
        int l, r;
        cin >> l >> r;
        f[l]++;
        f[r + 1]--;
    }
    
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cnt += f[i];
        f[i] = (cnt >= k) ? 1 : 0;
    }
    
    vector<int> p(N, 0);
    for (int i = 1; i < N; i++) {
        p[i] = f[i - 1] + p[i - 1];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << p[r + 1] - p[l] << '\n';
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}