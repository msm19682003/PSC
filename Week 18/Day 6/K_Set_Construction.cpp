#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define nl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<set<int>> sets(n + 1);
    
    for (int i = 1; i <= n; i++) {
        string row;
        cin >> row;
        for (int j = 1; j <= n; j++) {
            if (row[j - 1] == '1') {
                sets[j].insert(i);
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        sets[i].insert(i);
        for (int j : sets[i]) {
            sets[i].insert(sets[j].begin(), sets[j].end());
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << sets[i].size() << sp;
        for (int val : sets[i]) cout << val << sp;
        cout << nl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
