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
    int n;
    cin >> n;
    if(n == 3){
        cout << 1;nl;
        cout << 3; nl;
        return;
    }
    int m;
    if(n%2 == 1){
        n = n-3;
        m = n/2;
        cout << m+1; nl;
        for(int i = 0; i<m; i++){
            cout << 2 << sp;
        }
        cout << 3; nl;
    }
    else{
        m = n/2;
        cout << m; nl;
        for(int i = 0; i<m; i++){
            cout << 2 << sp;
        }
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}