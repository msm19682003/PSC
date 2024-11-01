#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n,i;
    map<string,int>mp;
    string s;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
        if(mp[s]==1)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<mp[s]-1<<endl;
        }
    }

}

int main()
{
    solve();
}
