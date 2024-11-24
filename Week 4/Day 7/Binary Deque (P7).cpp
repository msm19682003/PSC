#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int s = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
        s+=arr[i];
    }
    if( k > s)
    {
        cout << -1 << endl;
        return;
    }
    unordered_map<int, int> res;
    int sum = 0;
    int len = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum == k)
        {
            len = i + 1;
        }

        if (res.find(sum - k) != res.end())
        {
            int sublen = i - res[sum - k];
            len = max(len, sublen);
        }

        if (res.find(sum) == res.end())
        {
            res[sum] = i;
        }
    }
    cout << n-len << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
