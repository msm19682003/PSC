
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,flag=1;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R' && ss[i]!='R')
            {
                flag=0;
            }
            if((s[i]=='G'||s[i]=='B') && ss[i]=='R')
            {
                flag=0;
            }
        }

        if(flag)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }
    }


}


