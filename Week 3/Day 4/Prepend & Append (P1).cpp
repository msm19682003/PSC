#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;


void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int l=0,r=n-1;

    while(l<r && s[l]!=s[r]){
        l++;
        r--;
    }

    int ans=r-l+1;
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}
