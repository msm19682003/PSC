#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {

    int n = 8;
    char mat[9][9];
    for(int i = 0; i<n; i++){
        for(int j = 0; j< n; j++){
            cin >> mat[i][j];
        }
    }

    bool red = false;
    for(int i = 0; i<n; i++){
        int cnt = 0;
        for(int j = 0; j< n; j++){
            if(mat[i][j] == 'R'){
                cnt ++;
            }
        }
        // cout << cnt << endl;
        if(cnt == 8) red = true;
    }
    
    if(red ){
        cout << "R" << endl;
    }
    else{
        cout << "B" << endl;
    }

}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}