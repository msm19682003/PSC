#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll q, i, j;
    cin >> q;
    map<string, string> mp;
    map<string, string> res;
    string old, nw;
    for (i = 0; i < q; i++)
    {
        cin >> old >> nw;
        for (auto ele : res)
        {
            if (ele.second == old)
            {
                old = ele.first;
            }

        }
        res[old] = nw;
    }

    cout << res.size() << endl;

    for (auto ele : res)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}

int main()
{
    solveA();
}



