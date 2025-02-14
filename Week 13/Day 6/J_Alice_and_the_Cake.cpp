#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> ar(n), v2, v;
    map<ll, ll> mp;
    ll sum = 0;

    for (ll i = 0; i < n; i++){
        cin >> ar[i];
        sum += ar[i];
        mp[ar[i]]++;
        v2.pb(ar[i]);
    }

    priority_queue<ll> pq;
    pq.push(sum);

    for (ll i = 1; i < n; i++){
        while (!pq.empty() && mp[pq.top()] != 0){
            v.pb(pq.top());
            mp[pq.top()]--;
            pq.pop();
        }
        if (!pq.empty()){
            ll x = pq.top();
            pq.pop();
            ll a = x / 2, b = (x + 1) / 2;
            pq.push(a);
            pq.push(b);
        }
    }

    while (!pq.empty() && mp[pq.top()] != 0){
        v.pb(pq.top());
        mp[pq.top()]--;
        pq.pop();
    }

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    if (v == v2){
        py;
    }
    else{
        pn;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
