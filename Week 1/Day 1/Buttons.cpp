#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    int res= max(a+a-1, b+b-1);
    cout<<max(sum,res)<<endl;
}
