#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a;
    cin>>a;
    vector<int>v;
    while(a)
    {
        v.push_back(a%10);
        a/=10;
    }
    int l=v.size();
    for(int i=1;i<=4-l;i++)
    {
        v.push_back(0);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
