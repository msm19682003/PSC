#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n + 1), res(n + 1);

    for (int i = n - k + 1; i <= n; i++){
        cin >> v[i];
    }

    if (k == 1) {
        cout << "Yes\n";
        return;
    }
    
    for (int i = n; i >= n - k + 2; i--) {
        res[i] = v[i] - v[i - 1];
        if (i < n && res[i] > res[i + 1]) {
            cout << "No\n";
            return;
        }
    }

    if (v[n - k + 1] > res[n - k + 2] * (n - k + 1)) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
