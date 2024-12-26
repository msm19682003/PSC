#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b)
{
    return __gcd(a,b);
}

ll LCM(ll a, ll b)
{
    return ((a*b)/__gcd(a,b));
}

bool isPrime(ll n)
{
    if(n==1)
    {
        return false;
    }
    for(ll i=2;i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n,s;
    cin>>n;

    if(isPrime(n))
    {
        s=1;
    }
    
    else if(n%2==0)
    {
        s=2;
    }
    else
    {
        if(isPrime(n-2))
        {
            s=2;
        }
        else
        {
            s=3;
        }
        
    }

    cout<<s<<endl;
}

int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
   //}
   return 0;
}