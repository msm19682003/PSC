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
    ll n;
    cin>>n;
    vector<ll> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    ll p=1,j=0;
    while(j<n){
        int f=0;
        for(int k=j+1;k<min(n,p);k++){
            if(arr[k]<arr[k-1]){
                pn;
                return ;
            }
        }
        j=p;
        p*=2;
    }
    py;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}