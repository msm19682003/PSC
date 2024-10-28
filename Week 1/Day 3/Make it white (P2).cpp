
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j;
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(s[j]=='B')
        {
            break;
        }
    }


    cout<<j-i+1<<endl;

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
