#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    while(x>1){
        int p = y - (x%y);
        if(p >=k){
            x+=k;
            k =0;
        }
        else{
            x+=p;
            k-=p;
        }
        while(x%y == 0){
            x = x/y;
        }
        if(k<=0) break;
    }
    if(k){
        k = k%(y-1);
        x+=k;
        while(x%y == 0){
            x = x/y;
        }
    }
    cout << x << endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}