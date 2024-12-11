#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    string s;
    cin >> s;

    int decimal = 0;
    int length = s.size();

    for (int i = 0; i < length; i++) {
        if (s[i] == '7') {
            decimal += pow(2, length - i - 1); 
        }
    }
    decimal++;

    ll ans = (1 << length) - 2 + decimal;

    cout << ans << endl;

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}