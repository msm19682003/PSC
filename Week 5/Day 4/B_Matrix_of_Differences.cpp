#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int start = 1, end = n * n;
    int v[55][55];
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0) 
                {
                    v[i][j] = start++; 
                }
                else
                {
                    v[i][j] = end--; 
                }
            }
        }
        else 
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if ((i + j) % 2 == 0) 
                {
                    v[i][j] = start++; 
                }
                else
                {
                    v[i][j] = end--; 
                }
            }
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << sp;
        }
        nl;
    }
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
