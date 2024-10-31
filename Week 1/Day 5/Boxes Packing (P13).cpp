#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,res=0;
    cin>>n;
    ll a[n];
    map<ll,ll>b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        res=max(res,b[a[i]]);
    }

    cout<<res<<endl;
}

int main()
{
    solveA();
}
