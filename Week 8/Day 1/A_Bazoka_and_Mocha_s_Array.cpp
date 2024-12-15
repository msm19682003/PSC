
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n],i,j,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mn=a[0],ans=1,ind;
    for(i=0;i<n-1;i++)
    {
        
        if(a[i]>a[i+1])
        {
            flag++;
            ind=i;
        }
    }
    for(i=ind+1;i<n;i++)
    {
        if(flag)
        {
            if(a[i]>mn)
            {
                ans=0;
                break;
            }
        }
    }

    if(flag>1 || ans==0)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
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
}


