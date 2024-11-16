
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n,m,i,j,mx=0,mn=INT_MAX,c=0,w=0;
    cin>>n>>m;
    string s;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            c++;
            w=0;
        }
        else
        {
            w++;
            mn=min(mn,w);
            mx=max(mx,c);
            c=0;
        }
    }

    if(mx>=m)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<m-mx<<endl;
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
