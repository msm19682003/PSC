#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int a[n],b[m],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }

vector<int> ans;
    j=0,i=0;
    while(i<m)
    {
        if(j<n && a[j]<b[i])
        {
            cnt++;
            j++;
        }
        else
        {
            i++;
            ans.push_back(cnt);
        }
    }

    for(auto ele: ans)
    {
        cout<<ele<<" ";
    }
}

int main()
{
   
    solve();
   
   return 0;
}