#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    ll l=0,r=0,s=0,mx=0;
    while(r<n)
    {
        s+=a[r];
        if(s<=k)
        {
            mx=max(mx,((r-l)+1));

        }
        else
        {
            s-=a[l];
            l++;
        }
        r++;
    }

    cout<<mx<<endl;

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

