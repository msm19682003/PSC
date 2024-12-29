#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> freq(26, 0); 
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'A']++;
    }
    
    int cnt = 0;
    stack<char> stk1, stk2;
    char single;
    for (int i = 0; i < 26; i++) {
        if(freq[i] %2 == 1){
            cnt++;
            single = 'A'+i;
        }

        if(cnt>1){
            cout << "NO SOLUTION" << endl;
            return;
        }

        for(int j = 0; j< freq[i]/2; j++){
            stk1.push('A'+i);
            stk2.push('A'+i);
        }
    }

    string res(n, ' ');
    for (int i = 0; i < n / 2; i++) {
        res[i] = stk1.top();
        stk1.pop();
    }

    if (cnt) {
        res[n / 2] = single;
        for(int i = n-1; i>=n/2+1; i--){
            res[i] = stk2.top();
            stk2.pop();
        }
    }
    else{
        for(int i = n-1; i>=n/2; i--){
            res[i] = stk2.top();
            stk2.pop();
        }
    }
    
    for(char c: res){
        cout << c;
    }nl;
}

int main() {
    fast;
    int t;
    solve();
    return 0;
}