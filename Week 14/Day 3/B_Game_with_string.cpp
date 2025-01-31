#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "Yes" << '\n';
#define pn cout << "No" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    stack<char> st;
    ll k = 0;
    for(char c : s) {
        if(st.empty()) {
            st.push(c);
            continue;
        }
        if(st.top() == c) {
            k++;
            st.pop();
        } else {
            st.push(c);
        }
    }
    
    if(k % 2 == 0){
        pn;
    }
    else {
        py;
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}