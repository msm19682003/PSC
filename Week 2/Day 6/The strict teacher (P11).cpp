#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "

using namespace std;


void solve()
{
    int n,m,q,i;
    cin>>n>>m>>q;

    vector<int> t(m);
    for(i=0;i<m;i++)
    {
        cin>>t[i];
    }
    sort(t.begin(),t.end());

    int w[q];
    for(i=0;i<q;i++)
    {
        cin>>w[i];
        int ind=upper_bound(t.begin(),t.end(),w[i])-t.begin();

        //cout<<"Index: "<<ind<<endl;

        int res;

        if(ind==0)
        {
            res=t[ind]-1;
        }
        else if(ind==m)
        {
            res=n-t[m-1];
        }
        else
        {
           res=(t[ind]-t[ind-1])/2;

        }

        cout<<res<<endl;
    }



}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}





