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
    cin >> n;
    double sum = 0;
    map<double, ll> mp;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        mp[x]++;
        sum += x;
    }
    ll ans = 0;
    
    double sumt = (sum / n) * (n - 2);

    for (auto it : mp)
    {
        ll ai = it.first;
        if (mp[ai])
        {
            
            double k = sum - ai;
            double aj = k - sumt;
            if (ai == aj)
            {
                ll xt = it.second;
                ans += (xt - 1) * (xt) / 2;
            }
            else if (mp.find(aj) != mp.end())
            {
                ans += mp[aj] * it.second;
                mp[aj] = 0;
                mp[ai] = 0;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}