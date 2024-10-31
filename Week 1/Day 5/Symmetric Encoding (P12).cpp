
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j;
    string s,u="",res="";
    cin>>n>>s;
    ll a[26]={0};

    for(i=0; i<n; i++)
    {
        if(a[s[i]-'a']==0)
        {
            u+=s[i];
            a[s[i]-'a']=1;
        }
    }
    sort(u.begin(),u.end());
    ll l=u.size();

    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            if(s[i]==u[j])
            {
                res+=u[l-1-j];
            }
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




