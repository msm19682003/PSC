
#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    string s;
    cin >> s;
    set<int> ons, zrs;

	for(int i = 0; i<n; i++) {
		if (s[i] == '0')
			zrs.insert(arr[i]);
		else
			ons.insert(arr[i]);
	}

	vector<int> res(n + 1, 0);
	int curr = 1;

	while (!zrs.empty()) {
		int val = *zrs.begin();
		zrs.erase(zrs.begin());

		res[val] = curr++;
	}

	while (!ons.empty()) {
		int val = *(ons.begin());
		ons.erase(ons.begin());

		res[val] = curr++;
	}

	for(int i = 0; i<n; i++) {
		cout << res[arr[i]] << sp;
	}
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}
