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
#define sz 200004
using namespace std;

vector<int> vv[sz];
vector<int> temp;
int res[sz];

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        res[i] = 0;
        cin >> a[i];
        vv[a[i]].push_back(i);
    }
        
    for (int i = 1; i <= n; i++)
    {        
        if (vv[i].size() >= k)
        {
            for (int j = 0; j < k; j++)
            {
                res[vv[i][j]] = (j + 1);
            }
        }
        else
        {
            if (vv[i].size() >= 1)
                for (int j = 0; j < vv[i].size(); j++)
                    temp.push_back(vv[i][j]);
        }
    }
    int cnt = (temp.size()) / k;
    int p = 1;
    int dd = 0;

    for (int i = 0; i < temp.size(); i++)
    {
        if (dd == cnt)
            break;
        res[temp[i]] = p;
        if (p == k)
            dd++;
        p++;
        if (p == (k + 1))
            p = 1;
    }
    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
    temp.clear();
    for (int i = 0; i <= n; i++)
        vv[i].clear();
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}