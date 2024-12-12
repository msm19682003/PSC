#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll res = 0, cnt;
    for (int j = 30; j >= 0; j--)
    {
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
            {
                cnt++;
            }
        }
        res += ((cnt - 1) * cnt) / 2;
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