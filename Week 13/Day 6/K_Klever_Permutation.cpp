#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> ans(n + 5);
    int l = 1, r = n;

    for (int i = 1; i <= k; i++){
        if (i & 1){
            for (int j = i; j <= n; j += k){
                ans[j] = l++;
            }
        }
        else{
            for (int j = i; j <= n; j += k){
                ans[j] = r--;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cout << ans[i] << sp;
    }
    nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}