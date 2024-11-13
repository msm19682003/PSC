#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        if(s[i] == 'L') x = i;
        else if(s[i] == 'R') x = (n-1) - i;
        res[i] = max(i, (n-1)-i) - x;
        total+= x;
    }

    sort(res.begin(), res.end(), greater<int>());
    for (int x : res)
    {
        total+=x;
        cout <<  total << sp;
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}
