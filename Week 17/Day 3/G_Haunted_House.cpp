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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    ll cur(0);
    for (ll p = n - 1; p >= 0; p--)
    {
        if (s[p] == '1')
        {
            ++cur;
        }
        else
        {
            v.push_back(cur);
        }
    }

    for (ll p = 1; p < v.size(); p++)
    {
        v[p] += v[p - 1];
    }
    for (ll p = 0; p < n; p++)
    {
        cout << (p < v.size() ? v[p] : -1) << " ";
    }
    cout << endl;
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