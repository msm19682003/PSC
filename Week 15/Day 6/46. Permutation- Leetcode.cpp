#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void backtrack(vector<int>& nums, vector<vector<int>>& res, int start) {
    if (start == nums.size()) {
        res.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);  // Swap to create a new permutation
        backtrack(nums, res, start + 1);
        swap(nums[start], nums[i]);  // Backtrack to restore the original state
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    backtrack(nums, res, 0);
    return res;
}


int main() {
    fast;
    int t;
    cin >> t; while(t--)
    // solve();
    return 0;
}