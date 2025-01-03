#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, i;
    cin >> n;
    vector<ll> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<ll> s;
    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            s.insert(v[i]);
        }
        else
        {
            auto base=s.upper_bound(v[i]);
            if(base==s.end())
            {
                s.insert(v[i]);
            }
            else
            {
                s.insert(v[i]);
                s.erase(base);
            }
        }
    }

    cout << s.size() << endl;
}

int main()
{
    solve();
    return 0;
}