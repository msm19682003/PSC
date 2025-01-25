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
    int n , a, b;
    cin>>n>>a>>b;
        
        ll m=(n/2)-1;
        int l, r, i, j;
        if(b>a){
            l=n-a-1;
            r=b-2;
        }else{
            l=n-a;
            r=b-1;
        }
        
        
        
        if(l<m || r<m){
            cout<<"-1\n";
            return;
        }
        
        
        ll ans[n];
        
        ans[0]=a;
        ans[n-1]=b;
        
        j=n;
        
        for(i=1; i<n-1; i++)
        {
            if(j==a || j==b){
                j--;
            }
            
            if(j==a || j==b){
                j--;
            }
            
            ans[i]=j;
            
            j--;
            
        }
        
        for(i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}