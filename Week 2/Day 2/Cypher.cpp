#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,i,j;
        cin>>n;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        string s;
        for(i=0;i<n;i++)
        {
            cin>>b>>s;
            for(j=0;j<b;j++)
            {
                if(s[j]=='D' && v[i]!=9)
                {
                   v[i]++;
                }
                else if(s[j]=='D')
                {
                    v[i]=0;
                }
                else if(s[j]=='U' && v[i]!=0)
                {
                   v[i]--;
                }
                else if(s[j]=='U')
                {
                    v[i]=9;
                }

            }
        }

        for(auto ele:v)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}



