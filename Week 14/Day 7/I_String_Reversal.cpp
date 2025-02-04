#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    /* code */
    ordered_set<int> st;
    vector<vector<int>> v(26);
    map<int,int> mp;
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        v[s[i]-'a'].push_back(i);
    }
    reverse(s.begin(),s.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int x=s[i]-'a';
        int y=v[x][mp[x]++];
        st.insert(y);
        int m=st.order_of_key(y);
        y-=m;
        ans+=y;
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