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
    int n; 
    cin >> n;
    int mn(0), mx(1e9 + 7);

    vector<int> v;
    for(int p = 0; p < n; p++){
        int a; 
        int x; 
        cin >> a >> x;
        if(a == 1){
            mn = (mn > x ? mn : x);
        }
        else if(a == 2){
            mx = (mx < x ? mx : x);
        }
        else{
            v.pb(x);
        }
    }

    int cnt(mx - mn + 1);
    for(int p = 0; p < v.size(); p++){
        if(mn <= v[p] && v[p] <= mx){
            cnt--;
        }
    }
    cout << (cnt > 0 ? cnt : 0) << nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}