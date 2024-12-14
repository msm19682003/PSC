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

    string s;
    cin >> s;

    ll match = 0;
    for(int i = 0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            match++;
        }
    }   

    string t = "";
    for(int i = 0; i<match; i++){
        t+="0";
    }

    int flg = 0;
    if(n%2 == 0){
        for(int i = match; i<= n-match; i++){
            if(flg % 2 != 0){
                t+="0";
            }
            else t+="1";

            flg++;
        }
    }
    else{
        for(int i = match; i<= n-match; i++){
            t+="1";
        }
    }

    for(int i = 0; i<match; i++){
        t+="0";
    }

    cout << t << endl;
    
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}