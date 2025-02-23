#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};


void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> ar(n, vector<int>(n, 0));  

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int a = i, b = i;
        int y = x;
        
        while (x--) {
            ar[a][b] = y;
            if (b > 0 && ar[a][b - 1] == 0) 
                b--;
            else 
                a++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << ar[i][j] << sp;
        nl;
    }

}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}