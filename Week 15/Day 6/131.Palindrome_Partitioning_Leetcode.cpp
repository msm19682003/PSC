#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void createPartition(int index, string& s, vector<string>& temp , vector<vector<string>>& ans  ){
    if(index==s.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(isPalindrome(s.substr(index,i-index+1))){
            temp.push_back(s.substr(index,i-index+1));
            createPartition(i+1,s,temp,ans);
            temp.pop_back();
        }

    }

}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    int index=0;
    vector<string>temp;
    createPartition(index, s,temp,ans);
    return ans;        
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    // solve();
    return 0;
}