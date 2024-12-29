#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n, x;
    cin >> n >>x;

    map<ll, ll>mp;
    ll sum = 0, cnt = 0;
    mp[sum] = 1;

    for(int i = 0; i<n; i++){
        int p; cin >> p;
        sum+=p;
        
        if(mp[sum-x]){
            cnt++;
        }
        mp[sum] = 1;
    }
    cout << cnt << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}