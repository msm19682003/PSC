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
        int n,k,i,f=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[26]={0};
        for(i=0;i<n;i++)
        {
            a[s[i]-'a']++;
        }

        /*for(i=0;i<26;i++)
        {
            cout<<a[i]<<" ";
        }*/


        for(i=0;i<26;i++)
        {
            if(a[i]%2!=0)
            {
                f++;
            }
        }

        if(f==k)
        {
            cout<<"YES\n";
        }
        else if(f-1<=k)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }


}



