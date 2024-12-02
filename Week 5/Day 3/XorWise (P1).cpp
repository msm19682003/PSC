#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;

void solve()
{
    int a , b;
    ll ans = 0;
    cin >> a >> b;
    ans = a ^ b;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}