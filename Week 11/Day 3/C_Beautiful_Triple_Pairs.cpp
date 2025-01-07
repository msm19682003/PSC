#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    ll n, ans=0;
	cin>>n;
	map<tuple<ll,ll,ll>,ll> mp;
	vector<ll> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	for(ll i=0;i+2<n;i++){
		ans+=(mp[{v[i],v[i+1],-1}]+mp[{v[i],-1,v[i+2]}]+mp[{-1,v[i+1],v[i+2]}]-3*mp[{v[i],v[i+1],v[i+2]}]);
		mp[{v[i], v[i + 1], -1}]++;
		mp[{v[i], -1, v[i + 2]}]++;
		mp[{-1, v[i + 1], v[i + 2]}]++;
		mp[{v[i], v[i + 1], v[i + 2]}]++;
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