#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n,m,i,j;
    cin>>n>>m;
    vector<int> a(n),b(m);
    vector<int> v;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }

    j=0;
    for(i=0;i<m;i++)
    {
        while(a[j]<b[i])
        {
            if(j<n)
            {
                j++;
            }
        }
        v.push_back(j);
    }

    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
}

int main()
{
    solve();
}
