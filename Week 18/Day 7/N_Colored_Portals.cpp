#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define nl '\n'
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    unordered_map<char, int> f = {{'B', 1}, {'R', 2}, {'G', 4}, {'Y', 8}};
    vector<set<int>> t(16);
    
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        a[i] = f[s[0]] | f[s[1]];
        t[a[i]].insert(i);
    }
    
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        int ans = INT_MAX;
        
        for (int i = 0; i < 16; i++) {
            if ((a[x] & i) && (a[y] & i)) {
                auto it = t[i].lower_bound(y);
                if (it != t[i].end()) ans = min(ans, (*it) * 2 - x - y);
                if (it != t[i].begin()) {
                    --it;
                    ans = min(ans, y - (*it) + abs((*it) - x));
                }
            }
        }
        cout << (ans == INT_MAX ? -1 : ans) << nl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}