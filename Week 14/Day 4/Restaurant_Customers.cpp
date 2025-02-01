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
	vector<pair<int, int>> times;
	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		times.push_back({start, 1});
		times.push_back({end, -1});
	}

	sort(times.begin(), times.end());

	int curr = 0;
	int mx = 0;
	for (const pair<int, int> &t : times) {
		curr += t.second;
		mx = max(mx, curr);
	}

	cout << mx << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}