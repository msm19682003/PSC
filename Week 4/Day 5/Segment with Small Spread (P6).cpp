

#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,k,i,l,r;

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
        ml.insert(a[r]);
         mn=*ml.begin();
         mx=*ml.rbegin();

        if((mx-mn)<=k)
        {
            ans+=r-l+1;
        }
        else
        {
            while(l<=r)
            {
                mn=*ml.begin();
                mx=*ml.rbegin();

                if((mx-mn)<=k)
                {
                    break;
                }
                else
                {
                    ml.erase(ml.find(a[l]));
                    l++;
                }


            }

            mn=*ml.begin();
            mx=*ml.rbegin();

            if((mx-mn)<=k)
            {
                ans+=r-l+1;
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



