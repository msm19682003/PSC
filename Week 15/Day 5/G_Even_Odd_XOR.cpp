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
    int n;
    cin>>n;

    vector<int> vec(n, 0);
    int odd = 0, even = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        vec[i + 1] = i;
        if (i & 1)
        {
            odd ^= i;
        }
        else
        {
            even ^= i;
        }
    }

    if (even == odd)
    {
        odd ^= 1;
        odd ^= n - 1;
        vec[2] = n - 1;
    }

    vec[0] = (1 << (20)) + even;
    vec[1] = (1 << (20)) + odd;

    for (int i = 0; i < n; i++)
    {
        cout<< vec[i] <<" ";
    }
    nl;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}