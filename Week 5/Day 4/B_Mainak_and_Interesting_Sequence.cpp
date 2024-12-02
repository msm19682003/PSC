#include <bits/stdc++.h>
#define ll long long int
#define sp ' ' 
#define nl cout << endl
#define No cout << "No" << endl
#define Yes cout << "Yes" << endl
using namespace std;


void solve() {
    int n , m;
    cin >> n >>  m;

    bool f;
    vector<int> v(n);

    if(m<n){
        No;
        return;
    }
    else if (n%2 == 0){
        if(m % 2 == 0){
            f = true;
            for(int i = 0; i< n -2; i++){
                v[i] = 1;
            }
            v[n-2] = (m - n + 2)/2;
            v[n-1] = v[n-2];
        }
        else {
            f = false;
        }
    }
    else{
        f = true;
        for(int i = 0; i<n-1; i++){
            v[i] = 1;
        }
        v[n-1] = m-n+1;
    }
    
    if(f){
        Yes;
        for ( int x : v){
            cout << x << sp; 
        }
        nl;
    }
    else{
        No;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}