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
    ll n, i, x, y;
    cin >> n ;
    vector<ll> v;
    ll a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    ll c = 0, sum = 0;
 
    for(i = 0; i < n; i++){
        if(a[i] == *(v.rbegin())){
            x = v.size();
            sum = sum + (x-1);
            v.pop_back();
            continue;
        }
        x = lower_bound(v.begin(), v.end(), a[i]+1) - v.begin();
        sum+=(x-1);
        v.erase(v.begin() + x-1 );
    }
 
    cout<<sum;
 
    cout<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}