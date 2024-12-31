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
int n, k;
int arr[100009];

int binarySearch(int x)
{
    int low = 0, high = n - 1, pos = n+1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            pos = high+2;
        }
    }
    return pos;
}

void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cout << binarySearch(x) << endl;
    }
}

int main()
{
    fast;
    int t;
    // cin >> t; while(t--);
    solve();
    return 0;
}