#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    ll n;
    cin>>n;
    
    set<ll>st;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        st.insert(x);
    }

    vector<int> v;
    for(auto &it:st){
        v.push_back(it);
    }

    ll ans=0;
    for(int i=0;i<v.size();i++){
        ll x=v[i];
        auto it=lower_bound(v.begin(),v.end(),x+n);
        ll d=it-v.begin()-i;
        ans=max(ans,d);
    }
    cout<<ans<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}