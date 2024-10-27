
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int res=b-a;
    if(a>b)
    {
        res=0;
    }
    else
    {
        res++;
    }

    cout<<res<<endl;
    return 0;
}
