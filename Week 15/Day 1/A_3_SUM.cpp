#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve()
{
    long n;
    int b = 10;
    cin >> n;
    long cnt[b] = {0};
    for (long i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        cnt[x % b]++;
    }

    bool flg = false;

    for (long i = 0; !flg && i < b; i++)
    {
        for (long j = i; !flg && j < b; j++)
        {
            for (long k = j; !flg && k < b; k++)
            {
                if ((i + j + k) % 10 != 3)
                {
                    continue;
                }
                cnt[i]--;
                cnt[j]--;
                cnt[k]--;
                if (cnt[i] >= 0 && cnt[j] >= 0 && cnt[k] >= 0)
                {
                    flg = true;
                }
                cnt[i]++;
                cnt[j]++;
                cnt[k]++;
            }
        }
    }

    if (flg)
    {
        py;
    }
    else
    {
        pn;
    }
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