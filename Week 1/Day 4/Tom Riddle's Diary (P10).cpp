
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n,i,j,k,res=0;
    cin>>n;
    string s;
    vector<string> v;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0; i<n; i++)
    {
        bool flag=false;
        for(j=i-1; j>=0; j--)
        {
            if(v[i]==v[j])
            {
                cout<<"YES\n";
                flag=true;
                break;
            }
        }
        if(!flag)
        {
          cout<<"NO\n";
        }

    }

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


