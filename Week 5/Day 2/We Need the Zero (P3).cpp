#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);

    if (xOR == 0)
        cout << 0 << endl;
    else if (n & 1)
        cout << xOR << endl;
    else
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