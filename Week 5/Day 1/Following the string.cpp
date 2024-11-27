#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n,i,j;
    cin>>n;
    int a[n];
    string s="";
    int trk[26]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        {
            if(a[i]==trk[j])
            {
                s+=char(j+'a');
                trk[j]++;
                break;
            }
        }
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

