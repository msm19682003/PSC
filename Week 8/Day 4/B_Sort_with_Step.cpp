#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dm = 0;

    for (int i = 0; i < n; i++){
        if (abs(a[i] - i - 1) % k != 0){
            dm++;
        }
    }

    if (dm == 0){
        cout << 0 << endl;
    }
    else{
        if (dm <= 2){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}