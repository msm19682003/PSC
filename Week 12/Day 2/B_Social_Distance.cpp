#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

void solve() {
    
    ll n,m;
    cin>>n>>m;
    ll arr[n+3];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    arr[n]=arr[0];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=max(arr[i],arr[i+1]);
    }
    sum+=n;
    if(sum<=m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}