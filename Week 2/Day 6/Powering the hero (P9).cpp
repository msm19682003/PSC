#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "

using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    priority_queue<ll>pq;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=1)
        {
            pq.push(a[i]);
        }

        else
        {

            if(!pq.empty())
            {
                sum=sum+pq.top();
                pq.pop();
            }
        }


    }
    cout<<sum<<endl;
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
