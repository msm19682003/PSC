#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    int n, cnt= 0;
    cin >> n;

    bool b[3001] = {false};
    int pfact[3001] = {0};
    for (int i = 2; i <= n; ++i){
        if (!b[i]){
            for (int j = i + i; j <= n; j += i){
                b[j] = true;
                pfact[j] += 1;
            }
        }

        if (pfact[i] == 2){
            cnt ++;;
        }
    }
    cout << cnt; nl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}