#include <bits/stdc++.h>
#define ll long long int
#define sp ' ' 
#define nl cout << endl
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tmp = s;

    reverse(tmp.begin(), tmp.end());

    if(s<=tmp){
        if(n%2 == 0){
            cout << s << endl;
        }else{
            cout << s << tmp << endl;
        }
    }
    else{
        if(n%2 == 0){
            cout << tmp << s << endl;
        }else{
            cout << tmp << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}