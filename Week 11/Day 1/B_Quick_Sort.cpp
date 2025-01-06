#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    if(is_sorted(v.begin(), v.end())){
        cout << 0; nl;
        return;
    }
    
    int order = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == order+1){
            order++;
        }
    }

    cout << (n - order + k -1)/k; nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}