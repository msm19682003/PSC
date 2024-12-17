#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(str[i]);
    }

    vector<int> ans(26, INT_MAX);
    for (auto &a : st)
    {
        int low = 0;
        int high = n - 1;
        int c = 0;
        while (low < high)
        {
            if (str[low] == str[high])
            {
                low++;
                high--;
            }
            else
            {
                if (str[low] == a)
                {
                    low++;
                    c++;
                }
                else if (str[high] == a)
                {
                    high--;
                    c++;
                }
                else
                {
                    c = -1;
                    break;
                }
            }
        }
        if (c != -1)
            ans[a - 'a'] = c;
    }
    sort(ans.begin(), ans.end());

    if (ans[0] == INT_MAX)
        cout << "-1" << endl;
    else
        cout << ans[0] << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}