
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int l,i;
    string s;
    cin>>s;
    l=s.size();
    int a[26]={0};
    for(i=0;i<l;i++)
    {
        a[s[i]-'a']=1;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}
