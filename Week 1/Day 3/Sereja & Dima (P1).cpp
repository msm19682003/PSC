#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j;
    cin>>n;
    ll s=0,d=0;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    i=0,j=n-1;
    ll r=1;
    while(r<=n)
    {
       if(r%2!=0)
       {
           if(a[i]>a[j])
           {
               s+=a[i];
               i++;
           }
           else
           {
               s+=a[j];
               j--;
           }
       }
       else
       {
           if(a[i]>a[j])
           {
               d+=a[i];
               i++;
           }
           else
           {
               d+=a[j];
               j--;
           }
       }

       r++;
    }


    cout<<s<<" "<<d<<endl;
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
