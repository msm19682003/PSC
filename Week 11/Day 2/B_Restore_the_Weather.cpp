#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>>v;
    vector<int> b;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        v.push_back({x,i});
    }
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        b.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        int pos = v[i].second;
        ans[pos] = b[i];
    }

    for(auto x: ans){
        cout << x << sp;
    }
    nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}