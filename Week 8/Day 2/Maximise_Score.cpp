// https://www.codechef.com/problems/MAXIMSCORE

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    vector<int> diff(n-1);
    for(int i = 0; i<n-1; i++){
        diff[i] = abs(a[i] - a[i+1]);
    }

    int ans = INT_MAX;

    if(n >= 2){
        ans = min (ans , diff[0]);
    }

    if(n >= 2){
        ans = min (ans , diff[n-2]);
    }

    for(int i = 1; i<n-1; i++){
        int mx = max(diff[i-1], diff[i]);
        ans = min (ans, mx);
    }

    cout << ans << endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}