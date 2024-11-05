#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


void solve()
{
    ll n,i,x;
    cin>>n;
    map<int,int> mp;

    for(i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }

    priority_queue<int> pq;
    for(auto val:mp)
    {
        pq.push(val.second);
    }

    while(!pq.empty())
    {
        if(pq.size()<2)
        {
            break;
        }
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        x--;
        y--;
        if(x>0)
        {
            pq.push(x);
        }
        if(y>0)
        {
            pq.push(y);
        }
    }

    int res=0;
    while(!pq.empty())
    {
        res+=pq.top();
        pq.pop();
    }
    cout<<res<<endl;
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




