#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n == 3) {
        cout << "2 1 3\n";
        return;
    }
    if (n % 4 == 0) {
        ll add = (1LL << 30);
        ll curr = 1;
        for (ll i = 1; i <= n / 2; i++) {
            cout << curr << sp << curr + add ;
            curr++;
        }
    } 
    else if (n % 2 == 1) {
        ll add0 = (1LL << 25);
        ll add1 = (1LL << 26);
        cout << add1 ;
        ll curr = 1;
        for (int i = 1; i < n / 2; i++) {
            cout << curr << sp << curr + add0 ;
            curr++;
        }
        if ((n / 2) % 2 == 0)
            add1 += add0;
        cout << (n / 2) << sp << (n / 2) + add1 ;
    } 
    else {
        ll add0 = (1LL << 25);
        ll add1 = (1LL << 26);
        cout << "0 " << add1 ;
        ll curr = 1;
        for (ll i = 1; i <= (n / 2) - 2; i++) {
            cout << curr << sp << curr + add0 ;
            curr++;
        }
        cout << curr << sp << curr + add0 + add1 ;
    }
    nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}