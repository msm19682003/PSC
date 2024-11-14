
#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'B')
        {
            i = min(i + k, n);
            cnt++;
        }
        else
            i++;
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
