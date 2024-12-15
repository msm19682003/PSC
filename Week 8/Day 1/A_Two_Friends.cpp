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

    map<int, int> mp;

    for(int i = 0; i<n; i++){
        mp[v[i]] = i+1;
    }

    for(int i = 0; i<n; i++){
        if(mp[i+1] == v[i]){
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}