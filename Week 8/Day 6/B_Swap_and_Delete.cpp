#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int ans = 0;
    string s;
    cin>>s;
    int n = s.size(); 
    int a[2] = {0,0};
    for( int i = 0 ; i < n ; i++) {
        a[s[i]-'0']++;
    }
    
    for(int i = 0 ; i < n ; i++) {
        if(a[!(s[i]-'0')] > 0) {
            a[!(s[i]-'0')]--;
        }
        else {
            ans = n-i;
            break;
        }
    }
    cout<<ans<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}