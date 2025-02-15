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
    string s;
    cin >> s;
    int ans = INT_MAX;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int now = 0;
        for (int i = 0; i < s.size();)
        {
            if (s[i] == c)
            {
                i++;
            }
            else
            {
                int len = 0;
                while (i < s.size() && s[i] != c)
                    i++, len++;
                now = max(now, 32 - __builtin_clz(len));
            }
        }
        ans = min(ans, now);
    }
    cout << ans;nl;
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