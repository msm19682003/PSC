
#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;


void solve() {
    int n, xr = 0;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i<n; i++){
        cin >> v[i];
        xr^=v[i];
    }

    int ans = xr;
    for(int i = 0; i<n; i++){
        int curr = xr^v[i];
        ans = min (ans, curr);
    }
    cout << ans; nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}
