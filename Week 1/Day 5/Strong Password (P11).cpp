
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j;
    string s,res="";
    cin>>s;
    n=s.size();
    res+=s[0];
    bool ok=false;
    for(i=1; i<n; i++)
    {
        if(s[i]==s[i-1] && !ok)
        {
            if(s[i]=='z')
            {
                res+=s[i]-1;
            }
            else
            {
                res+=s[i]+1;
            }
            ok=true;
        }
        res+=s[i];
    }

        if(!ok)
        {
            if(s[n-1]=='z')
            {
                res+=s[n-1]-1;
            }
            else
            {
                res+=s[n-1]+1;
            }

        }

    cout<<res<<endl;

}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solveA();
    }
}



