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
    cin>>n;
    string s[] = {"b","b","a","a"};

    int i = 0, j = 0;
    while(i<n){
        cout<<s[j];
        j++;
        if(j == 4){
            j = 0;
        }
        i++;
    }
    cout<<endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}