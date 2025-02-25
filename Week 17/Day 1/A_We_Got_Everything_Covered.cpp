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
    ll n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'a'; ch < 'a' + k; ch++)
        {
            cout << ch;
        }
    }
    nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}