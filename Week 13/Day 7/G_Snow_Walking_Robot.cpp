#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    string s;
    cin >> s;
    int l = 0, r = 0, u = 0, d = 0;
    for (auto x : s){
        if (x == 'L'){
            l++;
        }
        else if (x == 'R'){
            r++;
        }
        else if (x == 'U'){
            u++;
        }
        else if (x == 'D'){
            d++;
        }
    }
    l = r = min(l, r);
    u = d = min(u, d);

    if (l > u){

        if (u == 0){
            l = r = u + 1;
        }
    }
    else if (u > l){
        if (l == 0){
            u = d = l + 1;
        }
    }

    cout << l + r + u + d << endl;

    for (int i = 0; i < l; i++){
        cout << "L";
    }
    for (int i = 0; i < u; i++){
        cout << "U";
    }
    for (int i = 0; i < r; i++){
        cout << "R";
    }
    for (int i = 0; i < d; i++){
        cout << "D";
    }
    cout << endl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}