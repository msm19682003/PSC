#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "

using namespace std;


void solve()
{
    int n,i;
    cin>>n;

    priority_queue<int> pq;
    for(i=1;i<=n;i++)
    {
        pq.push(i);
    }
    vector<pair<int,int> > v;
    int a,b;

    cout<<2<<endl;

    while(pq.size()>1)
    {
       a=pq.top();
       pq.pop();
       b=pq.top();
       pq.pop();
       pq.push((a+b+1)/2);
       cout<<a<<sp<<b<<endl;
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




