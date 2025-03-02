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

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll c = n / lcm(x, y);
    ll a = n - n / x + c;
    ll b = n / y - c;
    cout << (n * (n + 1) - a * (a + 1) - b * (b + 1)) / 2; nl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}