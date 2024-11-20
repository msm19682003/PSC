
#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n+2][m+2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = arr[i][j];

            int p = i - 1, q = j - 1;
            while (p >= 0 && q >= 0)
            {
                ans += arr[p--][q--];
            }

            p = i + 1, q = j + 1;
            while (p < n && q < m)
            {
                ans += arr[p++][q++];
            }

            p = i - 1, q = j + 1;
            while (p >= 0 && q < m)
            {
                ans += arr[p--][q++];
            }

            p = i + 1, q = j - 1;
            while (p < n && q >= 0)
            {
                ans += arr[p++][q--];
            }

            mx = max(mx, ans);
        }
    }

    cout << mx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
