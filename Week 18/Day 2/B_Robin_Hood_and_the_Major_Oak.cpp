#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl '\n'
#define pb push_back
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
 
    int odd = k / 2;
    if (k % 2 == 1 && n % 2 == 1)
        odd++;
 
    if (odd % 2 == 1){
        pn;
    }
    else{
        py;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}