#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    string p, h, n;
    cin >> p >> h;
    sort(p.begin(), p.end());

    int n1 = p.size();
    int n2 = h.size();

    for(int i = 0; i<= n2-n1; i++){
        n = h.substr(i, n1);
        sort(n.begin(), n.end());
        if(n == p){
            py;
            return;
        }
    }
    pn;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}