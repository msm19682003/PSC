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
    ll a, b;
    cin >> a >> b;

    ll sum = a + b;

    if (sum & 1)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}