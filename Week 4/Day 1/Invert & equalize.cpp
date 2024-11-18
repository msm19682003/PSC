#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,m,i,mn,mx,ans=0;
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            ans++;
        }
    }

    cout<<(ans+1)/2<<endl;


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





