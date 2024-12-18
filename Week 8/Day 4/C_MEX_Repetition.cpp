#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve()
{
    int n, k, b, brk, lst;
    cin >> n >> k;
    
    vector<int> v, t;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(b);
    }

    t = v;
    sort(t.begin(), t.end());
    brk = n;
    for (int i = 0; i < n; i++)
    {
        if (t[i] != i)
        {
            brk = i;
            break;
        }
    }

    int tmp;
    for (int i = 0; i < n; i++)
    {
        swap(v[i], brk);
    }
    v.push_back(brk);

    lst = (k - 1) % (n + 1);
    for (int i = (n + 1 - lst); i < (n + 1); i++)
    {
        cout << v[i] << " ";
    }
    
    for (int i = 0; i < (n - lst); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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