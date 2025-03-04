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
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    
    for(int i = 1; i < n; i++){
        ans += (s[i] == '@');
        if(s[i] == '*' && s[i-1] == '*'){
            break;
        }
    }
    cout << ans << nl;;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}