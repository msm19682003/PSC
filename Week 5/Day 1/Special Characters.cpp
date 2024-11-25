#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n,i;
    cin>>n;
    if(n%2==1)
    {
        cout<<"NO\n";
    }
    else
    {
        int l=0;

        cout<<"YES\n";
        for(i=0;i<26;i++)
        {
            if(l>=n)
            {
                break;
            }
            cout<<char('A'+i);
            cout<<char('A'+i);
            l+=2;

        }
        cout<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

