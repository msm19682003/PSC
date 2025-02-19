#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& result, int start) {
    if (target == 0) {
        result.push_back(combination);
        return;
    }
    if (target < 0) return;

    for (int i = start; i < candidates.size(); i++) {
        combination.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], combination, result, i);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> combination;
    backtrack(candidates, target, combination, result, 0);
    return result;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    // solve();
    return 0;
}