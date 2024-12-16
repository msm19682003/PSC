// https://www.codechef.com/problems/STRAME



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

    int one = 0, zro = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        else
            zro++;
    }

    int mn = min(one, zro);

    if (mn % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
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