#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll s,t,i,j,k,res=0;
    cin>>s>>t;
    for(i=0;i<=s;i++)
    {
        for(j=0;i+j<=s;j++)
        {
            for(k=0;i+j+k<=s;k++)
            {
                if(i*j*k<=t)
                {
                    res++;
                }
            }
        }
    }


    cout<<res<<endl;
}



int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solveA();
    //}
}

