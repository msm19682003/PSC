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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int has = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            has += a[i];
        }
        else if (a[i] == 0 && has)
        {
            a[i] = 1;
            has--;
            ans++;
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