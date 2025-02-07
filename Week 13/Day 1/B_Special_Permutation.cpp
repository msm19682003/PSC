#include <bits/stdc++.h>
#define fastread() (ios::sync_with_stdio(false), cin.tie(nullptr));
#define ll long long
#define pb push_back
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int m = n / 2;

    if ((a > m + 1) || (b < m)) {
        cout << -1 << '\n';
        return;
    }

    vector<int> firstHalf = {a}, secondHalf = {b};
    int rem = m - 1, curr = 1;

    while (rem) {
        if (curr == a || curr == b) {
            ++curr;
            continue;
        }
        if (curr > b) {
            cout << -1 << '\n';
            return;
        }
        secondHalf.pb(curr++);
        --rem;
    }

    rem = m - 1;

    while (rem) {
        if (curr == a || curr == b) {
            ++curr;
            continue;
        }
        if (curr < a) {
            cout << -1 << '\n';
            return;
        }
        firstHalf.pb(curr++);
        --rem;
    }

    for (int i : firstHalf) cout << i << ' ';
    for (int i : secondHalf) cout << i << ' ';
    cout << '\n';
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
