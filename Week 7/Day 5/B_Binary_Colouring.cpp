#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n; 
    cin>>n; 
    vector<ll> ans(31, 0); 

    for(int i = 0; i < 30; i++){
        if(1LL & (n >> i)){
            if(ans[i]){
                ans[i+1] = 1;
                ans[i] = 0;
            }
            else if(i > 0){
                if(ans[i-1] == 1){
                    ans[i+1] = 1;
                    ans[i-1] = -1;
                }
                else{
                    ans[i] = 1;
                }
            }
            else if(i == 0){
                ans[i] = 1;
            }
        }
    }
    cout << 31 << endl;
    for(int x: ans){
        cout << x << sp;
    }
    nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}