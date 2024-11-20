#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,i,j;
    string s,ss="";
    cin>>n>>s;

    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            j=stoi(s.substr(i-2,2))-1;
            ss+=j+'a';
            i-=2;

        }
        else
        {
            j=(s[i]-'0')-1;
            ss+=j+'a';
        }
    }

    reverse(ss.begin(),ss.end());


        cout<<ss<<endl;


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







