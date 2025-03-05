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
    int n,d,k;
    cin >> n >> d >> k;
    vector<int>a(n+2);
    for(int i=1,l,r;i<=k;i++)
    {
        cin >> l >> r;
        a[max(1,l-d+1)]++;
        a[r+1]--;
    }
    int mi=1,mx=1;
    for(int i=1;i<=n-d+1;i++)
    {
        a[i]+=a[i-1];
        if(a[i]<a[mi])
            mi=i;
        if(a[i]>a[mx])
            mx=i;
    }
    cout << mx << sp << mi << nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}