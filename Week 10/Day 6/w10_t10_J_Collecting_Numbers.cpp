#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << '\n'
using namespace std;


void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n+1), track(n+1);
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        track[v[i]] = i;
    }

    ll ans = 1, res = 1;
    for(int i = 1; i<=n; i++){
        if(ans > track[i]){
            res++;
        }
        ans = track[i];
    }
    cout << res;
    nl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}