#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n,m,i;
    map<string,int>mp;
    vector<string> v;
    string s;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=n-1; i>=0; i--)
    {
        if(mp[v[i]]==0)
        {
            cout<<v[i]<<endl;
            mp[v[i]]++;
        }
    }

}

int main()
{
    solve();
}
