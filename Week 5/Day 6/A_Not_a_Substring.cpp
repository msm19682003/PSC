#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, i, o = 0, c = 0, f = 0;
    string s;
    cin >> s;
    n = s.size();

    if (s == "()")
    {
        cout << "NO\n";
        return;
    }
    for (i = 0; i < n; i++)
    {
        if (i + 1 < n && s[i] == ')' && s[i + 1] == '(')
        {
            f = 1;
            break;
        }
    }
    cout << "YES\n";
    if (f)
    {
        for (i = 0; i < n; i++)
        {
            cout << "(";
        }
        for (i = 0; i < n; i++)
        {
            cout << ")";
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            cout << "()";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}