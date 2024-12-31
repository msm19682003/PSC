#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using namespace std;

int n, k;
int arr[100009];

int lowerBound(int x)
{
    int low = 0, high = n - 1, pos = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            pos = mid;  
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return pos;
}

int upperBound(int x)
{
    int low = 0, high = n - 1, pos = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
        {
            pos = mid;  
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return pos;
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> k;
    for (int j = 0; j < k; j++)
    {
        int x, y;
        cin >> x >> y;
        
        int low = lowerBound(x);
        int up = upperBound(y);

        cout << (up - low) << endl;
    }
}

int main()
{
    fast;
    solve();
    return 0;
}
