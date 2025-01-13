#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

int n;
vector<ll> a;

bool isPossible(ll x) {
    int cnt = 1, l = 0, r = 1;
    while (r < n) {
        if (a[l] + x + x >= a[r]) {
            r++;
        } else {
            cnt++;
            l = r;
            r = l + 1;
        }
    }
    return (cnt < 4);
}

void solve() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll low = 0, high = a[n - 1] - a[0], ans = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2LL;

        if (isPossible(mid)) {
            ans = mid;
            high = mid - 1LL;
        } else {
            low = mid + 1LL;
        }
    }

    cout << ans << endl;
}
int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}