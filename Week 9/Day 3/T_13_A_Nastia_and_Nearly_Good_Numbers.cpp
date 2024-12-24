#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast;
    ll t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m=a*b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES\n"<<a<<" "<<m<<" "<<a+m<<endl;
        }
    }
}