#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    string s,t;
    cin>>s>>t;

    int n=s.size(),i,res=0;

    for(i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            res++;
        }
    }
    cout<<res<<endl;
}

