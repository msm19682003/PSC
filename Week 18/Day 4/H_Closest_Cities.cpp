#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl '\n'
#define pb push_back
using namespace std;


void solve() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i= 0;i < n;i++) {
        cin>>v[i];
    }
    
    int left[n+1]={0},right[n+1]={0};
    left[0] = 0;
    right[n-1] = 0;
    right[0] = 1;
    left[n-1] = 1;
    
    
    for(int i = 1;i < n - 1;i++){
        if(v[i] - v[i-1]  > v[i+1] - v[i])
            right[i] = 1;
        else
            right[i] = v[i+1] - v[i];
    }
    
    for(int i = n-2;i >= 1;i--){
        if(v[i+1] - v[i] > v[i] - v[i-1])
            left[i] = 1;
        else
            left[i] = v[i] - v[i-1];
    }

        
    for(int i = 1;i<n-1;i++){
        right[i] = right[i] + right[i-1];
    }
        
    for(int i = n-2;i>=0;i--){
        left[i] = left[i] + left[i+1];
    }

    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        if(l < r){
            l--; 
            r--;
            cout<<right[r-1] - (l-1 < 0 ? 0 : right[l-1])<<nl;
        }
        else{
            l--; 
            r--;
            cout<<left[r+1] - left[l+1]<<nl;
        }
    }   
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}