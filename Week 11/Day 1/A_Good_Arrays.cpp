#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] == 1)
            cnt++;
    }
    if (sum - n >= cnt && n > 1)
    {
        py;
    }
    else
    {
        pn;
    }
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