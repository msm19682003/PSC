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
    int n, k;
    cin >> n >> k;

    int mx = 0;
    int evn = 0;
    bool div = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int rem = x % k;

        if (rem == 0) {
            div = true;
        } 
        else {
            mx = max(mx, rem);
        }

        if (rem == 2) {
            evn++;
        }
    }

    if (div) {
        cout << 0; nl;
        return;
    }

    if (k == 4) {
        if (evn >= 2) {
            cout << 0; nl;
        } 
        else if (evn >= 1 || mx == 3) {
            cout << 1; nl;
        } 
        else {
            cout << 2; nl;
        }
    } 
    else {
        cout << (k - mx); nl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}