#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n), prefixSum(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        prefixSum[i] = v[i];
    }
    for (ll i = 1; i < n; i++)
    {
        prefixSum[i] += prefixSum[i - 1];
    }
    string s;
    cin >> s;
    ll ans = 0;
    ll l = 0;
    ll r = n - 1;
    while (l <= r)
    {
        if (s[l] == 'R')
        {
            l++;
        }
        else
        {
            if (s[r] == 'L')
            {
                r--;
            }
            else
            {
                ans += prefixSum[r];
                if (l > 0)
                {
                    ans -= prefixSum[l - 1];
                }
                l++;
                r--;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
