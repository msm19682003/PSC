#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    ll l[c + 1], r[c + 1], len[c + 2];
    len[0] = n;

    for (int i = 1; i <= c; i++){
        cin >> l[i] >> r[i];
        len[i] = len[i - 1] + r[i] - l[i] + 1;
    }

    while (q--){
        ll k;
        cin >> k;
        for (int i = c - 1; i >= 0; i--){
            if (k > len[i]){
                k = l[i + 1] + (k - len[i] - 1);
            }
        }
        assert(k <= n);
        cout << s[k - 1]; nl;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}