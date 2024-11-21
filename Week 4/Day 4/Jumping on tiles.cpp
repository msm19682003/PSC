#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,i,j,b,l;
    string s,ss;

    cin>>s;
    l=s.size();


    char fast=s[0];
    char last=s[l-1];

    char mn=min(s[0],s[l-1]);
    char mx=max(s[0],s[l-1]);

    vector<pair<char,int>> v;

    for(i=1; i<l-1; i++)
    {
        if(s[i]>=mn && s[i]<=mx)
        {
            v.push_back({s[i],i+1});
        }

    }

    if(fast<=last)
    {
        sort(v.begin(),v.end());
    }
    else
    {
        sort(v.rbegin(),v.rend());
    }


    ll sum= abs((s[0]-'a')-(s[l-1]-'a')),step=v.size();


    cout<<sum<<" "<<step+2<<endl;
    cout<<1<<sp;
    for(auto ele:v)
    {
        cout<<ele.second<<sp;
    }
    cout<<l<<endl;
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

