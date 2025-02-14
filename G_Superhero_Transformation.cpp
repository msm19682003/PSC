#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "Yes" << '\n';
#define pn cout << "No" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    int n,m;
    string s,t;
    cin>>s>>t;
    n = s.length();
    m = t.length();
    if(n != m){
        pn;
        return;
    }
    int ok = 0;
    for(int i=0; i<n; i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')){
            ok = 1;
        }
        else if((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') && (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u')){
            ok = 1;
        }
        else{
            ok = 0;
            break;
        }
    }

    if(ok == 1){
        py;
    }
    else{
        pn;
    }

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}