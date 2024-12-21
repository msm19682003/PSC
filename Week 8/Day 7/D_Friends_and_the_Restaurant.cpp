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

    vector<ll> x(n), y(n);
    for(int i = 0; i<n; i++){
        cin >> x[i];
    }
    for(int i = 0; i<n; i++){
        cin >> y[i];
    }

    vector<ll> diff;
    int neg = 0;
    for(int i = 0; i<n; i++){
        diff.push_back(y[i]- x[i]);
        if((y[i] - x[i]) < 0) 
            neg++;
    }

    sort(diff.begin(), diff.end());
    int i = 0, j = n-1;
    int cnt= 0;

    while (i < j) {
    if (diff[i] + diff[j] >= 0) {
        cnt++;
        i++; j--;
    } else {
        i++;
    }
}

    cout << cnt << endl;
    
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}