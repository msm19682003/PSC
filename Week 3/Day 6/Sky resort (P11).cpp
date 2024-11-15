#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,q;
        cin>>n>>k>>q;
        long long a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long cnt=0,sum=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    long long c=cnt-k + 1;
                    long long d=((c+1)*c)/2;
                    sum+=d;
                }
                cnt=0;
            }
        }
        long long d=0;
        if(cnt>=k)
        {
            long long c=cnt-k+1;
            d=((c+1)*c)/2;
        }
        sum+=d;
        cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}

