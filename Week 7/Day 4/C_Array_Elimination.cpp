#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), res(33), ans;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int j = 0; j < 32; j++){
        for (int i = 0; i < n; i++){
            if (a[i] & (1 << j))
                res[j]++;
        }
    }

    for (int i = 1; i < n + 1; i++){
        bool ok = true;
        for (int j = 0; j < 32; j++){
            if (res[j] % i != 0){
                ok = false;
                break;
            }
        }
        if (ok)
            ans.push_back(i);
    }
    
    sort(ans.begin(), ans.end());
    for (int x : ans){
        cout << x << sp;
    }
    nl;
}

int main(){
    fast;
    int t;
    cin >> t;while (t--)
    solve();
    return 0;
}