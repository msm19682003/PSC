

#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,k,i,l,r,s=0;

    cin>>n>>k;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    l=0,r=0;
    ll ans=0,mn,mx;
    multiset<ll> ml;

    while(r<n)
    {
        s+=a[r];
        if(s>=k)
        {
            ans+=(n-r);
            while(s>=k)
            {
                s-=a[l];
                if(s>=k)
                {
                    ans+=(n-r);
                }
                l++;
            }
        }

            r++;


    }
cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}




