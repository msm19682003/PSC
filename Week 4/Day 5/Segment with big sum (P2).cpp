#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,k,s=0,i,j,b,l,r;

    cin>>n>>k;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    l=0,r=0;
    ll ans=0,w=INT_MAX,flag=0;

    while(r<n)
    {
        s+=a[r];

        if(s>=k)
        {
            while(s>=k)
            {
                s-=a[l];
                if(s<=k)
                {
                    flag=1;
                }

                l++;
            }

            if(flag)
            {
                ans=r-l+2;
                w=min(w,ans);
            }
            else
            {
                ans=r-l+1;
                w=min(w,ans);
            }
        }
        r++;
    }

    if(w==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<w<<endl;
    }

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



