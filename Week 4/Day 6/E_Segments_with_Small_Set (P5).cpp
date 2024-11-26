#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = 0;
    unordered_map<ll, ll> freq; 
    ll cnt = 0;

    while (r < n) {
        if (freq[a[r]] == 0) {
            cnt++;
        }
        freq[a[r]]++;
        r++;
        
        while (cnt > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                cnt--;
            }
            l++;
        }

        ans += (r - l);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
