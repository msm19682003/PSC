#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> st(n);

    for (int i = 0; i < n; i++) {
        cin >> st[i];
    }

    vector<string> left, right;
    string cntr;
    vector<bool> usd(n, false);

    for (int i = 0; i < n; i++) {
        if (usd[i]) continue;
        string rev = st[i];
        reverse(rev.begin(), rev.end());

        for (int j = i + 1; j < n; j++) {
            if (!usd[j] && st[j] == rev) {
                left.push_back(st[i]);
                right.push_back(st[j]);
                usd[i] = usd[j] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (!usd[i]) {
            string rev = st[i];
            reverse(rev.begin(), rev.end());
            if (st[i] == rev) {
                cntr = st[i];
                break;
            }
        }
    }

    string res;
    for (const string& str : left) res += str;
    res += cntr;
    for (auto it = right.rbegin(); it != right.rend(); ++it) res += *it;

    cout << res.size() << endl;
    cout << res << endl;

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}