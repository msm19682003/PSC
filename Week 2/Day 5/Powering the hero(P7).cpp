#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            v.push_back(arr[i]);
        else
        {
            if (!v.empty())
            {

                ll max_pos = 0;
                for (int j = 1; j < v.size(); j++)
                {
                    if (v[j] > v[max_pos])
                        max_pos = j;
                }
                res += v[max_pos];
                v.erase(v.begin() + max_pos);
            }
        }
    }
    cout << res << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
