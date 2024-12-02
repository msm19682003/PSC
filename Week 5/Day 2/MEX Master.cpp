
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n,i,j,o=0,z=0,p=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]==1)
        {
            o++;
        }
        else
        {
            p++;
        }
    }

    int res;
    if(z<=(n+1)/2)
    {
        res=0;
    }
    else if(z==n || p>0 || o==0)
    {
        res=1;
    }
        else
        {
            res=2;
        }
    cout<<res<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

