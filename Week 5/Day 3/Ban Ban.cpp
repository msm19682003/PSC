
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int res=(n+1)/2,p=n,i=1,j=6;
    vector<int>v;

    while(p)
    {
        if(p==1)
        {
            v.push_back(i);
            v.push_back(i+1);
            p--;
        }
        else
        {
            v.push_back(i);
            v.push_back(j);
            i+=6;
            j+=6;
            p-=2;
        }

    }

    cout<<res<<endl;
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;


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


