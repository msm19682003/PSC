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
    int n;              
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans=a[n-1]-a[0];

    for(int i=1;i<=n-1;i++){
        ans=max(ans,a[i]-a[0]);
    }
    for(int i=0;i<=n-2;i++){
        ans=max(ans,a[n-1]-a[i]);
    }
    for(int i=1;i<=n-1;i++){
        ans=max(ans,a[i-1]-a[i]);
    }

    cout<<ans<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}