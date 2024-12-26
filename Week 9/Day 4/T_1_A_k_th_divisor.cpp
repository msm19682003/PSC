#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if ((n / i) != i)
            {
                div.push_back(n / i);
            }
        }
    }

    sort(div.begin(), div.end());

    if (div.size() < k)
    {
        cout << -1 << endl;
        return;
    }
    cout << div[k - 1] << endl;
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}