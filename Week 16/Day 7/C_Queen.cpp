#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define pb push_back
using namespace std;

const int N = 100005;
ll parent[N], rmv[N], respect[N];

void solve() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> parent[i] >> respect[i];
        rmv[i] = 1;
    }
    
    for (ll i = 1; i <= n; i++) {
        if (respect[i] == 0) {
            rmv[i] = 0;
            rmv[parent[i]] = 0;
        }
    }
    
    bool found = false;
    for (ll i = 1; i <= n; i++) {
        if (rmv[i] == 1) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) cout << "-1\n";
    else cout << "\n";
}

int main() {
    fast;
    solve();
    return 0;
}


