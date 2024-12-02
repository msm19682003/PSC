#include <bits/stdc++.h>
#define ll long long int
#define sp ' ' 
#define nl cout << endl
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> odd, evn;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0) {
            evn.push_back(x);
        } else {
            odd.push_back(x);
        }
    }

    ll es = evn.size(), os = odd.size();

    if (es == n || os == n) {
        cout << 0 << endl;
        return;
    }

    sort(evn.begin(), evn.end());
    sort(odd.begin(), odd.end());

    ll mxodd = odd.back();
    ll ans = 0;
    for(int i =0; i<es; i++){
        if(evn[i] > mxodd){
            ans = es+1;
            break;
        }else{
            ans++;
            mxodd += evn[i];
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
