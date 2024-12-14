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

    vector<ll> b(n);
    for(int i = 0; i<n-1; i++){
        cin >> b[i];
    }

    vector<ll> ans(n);
    
    for(int i = 0; i<n-1; i++){
        ans[i] |= b[i];
        ans[i+1] |= b[i];
    }

    for(int i = 0; i<n-1; i++){
        if(b[i] != (ans[i] & ans[i+1])){
            cout << "-1" << endl;
            return;
        }
    }

    for(int x: ans){
        cout << x << sp;
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