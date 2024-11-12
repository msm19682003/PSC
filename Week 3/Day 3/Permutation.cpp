#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n,i,j;
    cin>>n;
    ll a[n][n-1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            cin>>a[i][j];
        }
    }
    ll res[n+1]={0};
    vector<int> v;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n;i++)
        {
            res[a[i][j]]++;
            if(res[a[i][j]]==n-1)
            {
                v.push_back(a[i][j]);
            }
        }
    }

    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i][n-2]==v[v.size()-1])
        {
            cnt++;
        }
    }

    if(cnt!=(n-1))
    {
        swap(v[v.size()-1],v[v.size()-2]);
    }

    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
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

