
#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += abs(v[i]);
    }

    ll ans = 0;
    bool neg = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0 && !neg)
        {
            ans++;
            neg = true;
        }
        else if (v[i] > 0)
            neg = false;
    }

    cout << sum << sp << ans << endl;
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
