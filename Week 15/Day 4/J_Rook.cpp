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
    for (char col = '1'; col <= '8'; col++)
    {
        if (col != s[1])
        {
            cout << s[0] << col << endl;
        }
    }
    for (char row = 'a'; row <= 'h'; row++)
    {
        if (row != s[0])
        {
            cout << row << s[1] << endl;
        }
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