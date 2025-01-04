#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,l, i,v;
    cin >>l>> n;

    set<int> pos;
    multiset<int> len;

    pos.insert(0);
    pos.insert(l);
    len.insert(l);

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        auto nxt = pos.upper_bound(v);
        auto pre = nxt;
        pre--;

        len.erase(len.find(*nxt - *pre));

        len.insert(*nxt - v);
        len.insert(v - *pre);

        pos.insert(v);

        cout << *len.rbegin() << " ";
    }
    
   cout<<endl;
}

int main()
{
    solve();
    return 0;
}