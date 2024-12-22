#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<char, ll> fo, lo;
    map<string, ll> mp;
    vector<string> s(n);
    
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        fo[s[i][0]]++;
        lo[s[i][1]]++;
        mp[s[i]]++;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (fo[s[i][0]] + lo[s[i][1]] - 2 * mp[s[i]]);
        fo[s[i][0]]--;
        lo[s[i][1]]--;
        mp[s[i]]--;
    }

    cout << ans << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
