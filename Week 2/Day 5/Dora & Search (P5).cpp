#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int mn = 1, mx = n;
    int i = 1, j = n;

    while (i < j)
    {

        if (arr[i] == mn)
        {
            mn++;
            i++;
        }
        else if (arr[i] == mx)
        {
            mx--;
            i++;
        }
        else if (arr[j] == mn)
        {
            mn++;
            j--;
        }
        else if (arr[j] == mx)
        {
            mx--;
            j--;
        }
        else
        {
            cout << i << sp << j << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
