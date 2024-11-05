
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


void solve()
{
    int q, customerNo = 1;
    cin >> q;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= q; i++)
    {
        int opt;
        cin >> opt;

        if (opt == 1)
        {
            int m;
            cin >> m;
            s.insert({ customerNo,m });
            ml.insert({ m,-customerNo });
            customerNo++;
        }

        else if (opt == 2)
        {
            int pos = s.begin()->first, m = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({ m,-pos });
        }

        else
        {
            int pos = -ml.rbegin()->second, m = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({ pos,m });
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << '\n';
}

int main()
{
    fast;
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solve();
    //}

}




