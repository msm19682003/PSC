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
    ll n, num, fst = -1, lst = -1;
    cin >> n;

    bool flag = 0;
    while (n--)
    {
        cin >> num;
        if (flag)
        {
            if (num >= lst and num <= fst)
            {
                lst = num;
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            if (fst == -1)
            {
                fst = num;
                lst = num;
                cout << 1;
            }
            else if (num >= lst)
            {
                lst = num;
                cout << 1;
            }
            else if (fst >= num)
            {
                lst = num;
                flag = 1;
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
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