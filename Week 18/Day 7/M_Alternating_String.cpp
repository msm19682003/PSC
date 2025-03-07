#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define nl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if (n == 1) {
        cout << "1" << nl;
        return;
    }
    
    if (n % 2) {
        vector<vector<int>> pre(n, vector<int>(26, 0)), post(n, vector<int>(26, 0));
        for (int i = 0; i < n; i++) {
            if (i - 2 >= 0) pre[i] = pre[i - 2];
            pre[i][s[i] - 'a']++;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (i + 2 < n) post[i] = post[i + 2];
            post[i][s[i] - 'a']++;
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            vector<int> cnt0(26, 0), cnt1(26, 0);
            if (i - 1 >= 0) cnt0 = pre[i - 1];
            if (i - 2 >= 0) cnt1 = pre[i - 2];
            if (i + 1 < n) 
                for (int j = 0; j < 26; j++) cnt1[j] += post[i + 1][j];
            if (i + 2 < n) 
                for (int j = 0; j < 26; j++) cnt0[j] += post[i + 2][j];
            
            int mn1 = INT_MAX, mn2 = INT_MAX;
            for (int j = 0; j < 26; j++) {
                mn1 = min(mn1, n / 2 - cnt0[j]);
                mn2 = min(mn2, n / 2 - cnt1[j]);
            }
            ans = min(ans, mn1 + mn2);
        }
        cout << ans + 1 << nl;
    } else {
        vector<vector<int>> cnt(2, vector<int>(26, 0));
        for (int i = 0; i < n; i++) cnt[i % 2][s[i] - 'a']++;
        
        int mn1 = INT_MAX, mn2 = INT_MAX;
        for (int i = 0; i < 26; i++) {
            mn1 = min(mn1, n / 2 - cnt[0][i]);
            mn2 = min(mn2, n / 2 - cnt[1][i]);
        }
        cout << mn1 + mn2 << nl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}