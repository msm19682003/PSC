#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;

bool check(string s, string t, ll mid, vector<ll> &v)
{
    for (ll i = 0; i <= mid; i++)
    {
        s[v[i] - 1] = '#';
    }

    ll i = 0, j = 0;
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
        {

            j++;
        }

        i++;
    }

    if (j == t.size())
    {
        return true;
    }
    return false;
}

void solve()
{
    int i;
    ll n, m;
    string s, t;
    cin >> s >> t;
    n = s.size();
    m = t.size();

    // cout<<s<<"-->"<<n<<endl;
    // cout<<t<<"-->"<<m<<endl;

    vector<ll> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // for(auto ele:v)
    // {
    //     cout<<ele<<" ";
    // }
    // nl;

    ll l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        // cout<<"Low = "<<l<<endl;
        // cout<<"High = "<<r<<endl;

        bool f = check(s, t, mid, v);
        // cout<<f<<endl;

        if (f)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << l;
    nl;
}

int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
