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

int binarySearch(const vector<long long> &arr, int n, int x)
{
    int low = 0, high = n - 1, mn = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            mn = min(mn, mid);
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return mn + 1;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    vector<long long> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (pref[n - 1] < x)
            cout << -1 << '\n';

        else
            cout << binarySearch(pref, n, x) << '\n';
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
