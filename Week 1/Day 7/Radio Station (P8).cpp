
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n,m,i;
    map<string,string>mp;
    map<string,string>res;
    string s,ip,c,p;
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>s>>ip;
        ip+=';';
        mp[ip]=s;
    }
    for(i=0; i<m; i++)
    {
        cin>>c>>p;
        cout<<c<<" "<<p<<" #"<<mp[p]<<endl;
    }

}

int main()
{
    solve();
}
