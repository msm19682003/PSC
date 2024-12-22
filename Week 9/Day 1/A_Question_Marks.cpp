#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c[4] = {0};
    int r = 0;
    for (auto i : s)
    {
        if (i != '?')
        {
            c[i - 'A']++;
        }
    }

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += min(c[i], n);
    }

    cout << ans << endl;
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