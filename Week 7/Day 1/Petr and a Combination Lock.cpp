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
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    bool flag = false;
    for(int mask = 0; mask < (1<<n); mask++){
        ll sum = 0;
        for(int i = 0; i< n; i++){
            if((mask >> i) & 1){
                sum += v[i];
            }
            else{
                sum -= v[i];
            }
        }
        if(sum % 360 == 0){
            flag = true;
            break;
        }
    }
    if(flag){
        py;
    }
    else{
        pn;
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}