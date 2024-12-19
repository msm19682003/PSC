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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ops = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == 0)
        {
            cout << -1 << endl;
            return;
        }

        while (arr[i - 1] > 0 && arr[i] <= arr[i - 1])
        {
            arr[i - 1] /= 2;
            ops++;
        }
    }
    cout << ops << endl;
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