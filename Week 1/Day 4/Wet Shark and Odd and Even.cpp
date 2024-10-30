#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j,k,res=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        res+=a[i];
    }
    if(res%2==0)
    {
        cout<<res<<endl;
        return;
    }

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            res-=a[i];
            break;
        }
    }

    cout<<res<<endl;
}



int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solveA();
    //}
}


