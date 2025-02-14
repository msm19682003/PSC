#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    bool ok = false;

    for (auto &x : v)
        cin >> x;

    ll XOR = 0;

    for (int i = 0; i < n - 1; i++){
        XOR ^= v[i];
        ll chk = 0;
        int cnt = 0;
        for (int j = i + 1; j < n; j++){
            if (v[j] == 0)
                continue;
            if (chk == XOR){
                chk = 0;
                ++cnt;
            }
            chk ^= v[j];
        }
        if (chk == XOR){
            ok = true;
            break;
        }
        else if (cnt > 0 and chk == 0){
            ok = true;
            break;
        }
    }

    if(ok){
        py;
    }
    else{
        pn;
    }
    
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}