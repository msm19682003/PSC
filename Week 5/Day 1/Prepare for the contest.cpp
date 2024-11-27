#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    int n,i,j,k;
    cin >> n>>k;
    int s=n-k;
    for(i=s;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(i=s-1;i>0;i--)
    {
        cout<<i<<" ";
    }

    cout<<endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

