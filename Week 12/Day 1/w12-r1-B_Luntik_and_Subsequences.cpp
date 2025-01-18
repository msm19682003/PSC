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
    {
        cin >> arr[i];
    }

    ll ones = count(arr.begin(), arr.end(), 1);
    ll zeros = count(arr.begin(), arr.end(), 0);

    if (ones == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ones * (1LL << zeros) << endl;
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