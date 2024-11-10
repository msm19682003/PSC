#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,f,b,m,mn;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    bool flag=true;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1] && a[i]!=0)
        {
            flag=false;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
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



