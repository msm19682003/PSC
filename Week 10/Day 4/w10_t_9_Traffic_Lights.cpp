#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve()
{
    int n,l, i,v;
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
    
   cout<<'\n';
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}