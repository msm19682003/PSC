#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[1000000], b[1000000];
    map<ll,ll>v;
    ll k=0,j=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v[a[i]]++;
        if(v[a[i]]==1)
            b[j++]=a[i];

    }
    sort(b,b+j);
    ll sum=v[b[0]];
    k=sum;
    for(int i=1; i<j; i++)
    {
        if(b[i]-b[i-1]==1)
        {
            if(k>v[b[i]])
            {
                k=v[b[i]];
            }
            else
            {
                sum=sum+v[b[i]]-k;
                k=v[b[i]];
            }
        }
        else
        {
            sum=sum+v[b[i]];
            k=v[b[i]];
        }
        //cout<<sum<<" ";
    }
    //cout<<endl;
    cout<<sum<<endl;


}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
        
    return 0;
}

