#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    int n;
	cin >> n;

	vector<int> a(n), b(n), c(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		c[i] = a[i] - b[i];
	}

	sort(c.begin(), c.end());

	ll ans = 0;

	for (int i = 0; i < n; ++i) {
		if (c[i] <= 0)
			continue;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		ans += i - pos;
	}

	cout << ans << "\n";
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}