
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    map<int, int> freq_a, freq_b;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq_a[a[i]]++;
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        freq_b[b[i]]++;
    }

    ll total = 0;

    for (auto& [val, cnt] : freq_a) {
        if (freq_b.count(val)) {
            total += (ll) cnt * freq_b[val];
        }
    }

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
