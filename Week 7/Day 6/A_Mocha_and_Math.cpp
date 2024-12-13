#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 5], res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    res = a[0];
    for (int i = 1; i < n; i++)
    {
        res = res & a[i];
    }
    cout << res << endl;
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