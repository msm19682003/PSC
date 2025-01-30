#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<s[i][j];
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i+=k)
    {
        for(int j=0;j<n;j+=k)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }

}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}
