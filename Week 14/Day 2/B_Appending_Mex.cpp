#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k, i;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=-1;
    for (i = 0; i <n; i++)
    {
       if(a[i]>mx+1)
       {
        cout<<i+1<<endl;
        return;
       }
       
        mx=max(mx,a[i]);
       
    }
    cout<<-1<<endl;
    return;
}

int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
