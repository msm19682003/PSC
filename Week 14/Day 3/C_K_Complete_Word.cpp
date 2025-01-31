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
    int n , k ;
    cin >> n >> k;
    string s , t(k,'.') ;

    cin >> s;
    vector < vector <int > > v(k , vector<int> (30)) ;
    for(int i = 0 ; i < n ; i++){
        int x = s[i] -'a' ;
        v[i%k][x] ++ ;
    }
    int i = 0 , j = k-1 ;
    while(i <= j){
        int mx = 0 , id = -1 ;
        for(int p = 0 ; p < 30 ; p++){
            int temp = v[i][p] + v[j][p] ;
            if(temp > mx){
                mx = temp ;
                id = p ;
            }
        }
        t[i] = t[j] = (id+'a')  ;
        i ++ ;
        j -- ;
    }
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] != t[i%k]){
            cnt ++ ;
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