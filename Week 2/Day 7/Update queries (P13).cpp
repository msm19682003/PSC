#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;


void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(n);
    while(m--)
    {
        int ind;
        cin >> ind;
        ind--;
        v[ind] = 1;
    }
    string c;
    cin >> c;
    sort(c.begin(),c.end());
    int i, j=0;
    for(i=0; i<n; i++)
    {
        if(v[i])
        {
            s[i] = c[j++];
        }
    }
    cout <<s << "\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}