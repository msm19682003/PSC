#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k, i;
    cin >> n;
    string s, res = "";
    cin >> s;
    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            res += s[i];
            res += s[i - 1];
            res += '.';
            i--;
        }
        else
        {
            res += s[i];
            res += s[i - 1];
            res += s[i - 2];
            res += '.';
            i -= 2;
        }
    }
    //res.erase(res.end());
    //cout<<res<<endl;
    reverse(res.begin(),res.end());
    res.erase(res.begin());
    cout<<res<<endl;

}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
