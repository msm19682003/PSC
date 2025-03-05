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
   
    long long x, y, k;
    cin >> x >> y >> k;

    double mvx = ceil((double)x / (double)k);
    double mvy = ceil((double)y / (double)k);

    long long diff = abs(mvx - mvy);
    long long ans = mvx + mvy + diff;
    if (mvx > mvy)
        ans--;

    cout << ans << endl;
    

}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}