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

    string s, t;
    cin >> s >> t;

    bool flag = false;
    for(int i = 0; i<n; i++){
        if(s[i] == '1') flag = true;
        
        else if(s[i] == '0' && t[i] == '1' && !flag){
            pn;
            return;
        }
    }
    py;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}