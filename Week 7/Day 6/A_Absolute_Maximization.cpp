#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int arr[n + 10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ors = arr[0];
    ll ands = arr[0];

    for (int i = 1; i < n; i++)
    {
        ors = ors | arr[i];
        ands = ands & arr[i];
    }

    cout << ors - ands;

    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
