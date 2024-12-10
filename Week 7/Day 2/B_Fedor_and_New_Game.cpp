#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    int cnt = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++){
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1)){
                t++;
            }
        }

        if(t <= k)
            cnt++;
    }

    cout << cnt << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}