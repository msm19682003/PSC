#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, t, i, j, k;
    cin >> n >> t;
    vector<pair<ll, int>> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++)
    {
        ll val = t - v[i].first;
        for (j = i + 1, k = n - 1; j < k; j++)
        {
            while (v[j].first + v[k].first > val)
            {
                k--;
            }
            if (j < k && v[j].first + v[k].first == val)
            {
                cout << v[i].second << " " << v[j].second << " " << v[k].second << endl;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main()
{
    solve();
    return 0;
}