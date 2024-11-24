
#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k)
{
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

    return len;
}

int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, k) << endl;

    arr = {-1, 2, -3};
    k = -2;
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, k) << endl;

    arr = {1, -1, 5, -2, 3};
    k = 3;
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, k) << endl;

    return 0;
}
