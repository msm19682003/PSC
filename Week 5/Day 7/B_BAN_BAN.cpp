
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int res=(n+1)/2,p=n,i=1,j=3*n;
    vector<int>v;

    while(i<j)
    {
        
            v.push_back(i);
            v.push_back(j);
            p--;
        
        i+=3;
        j-=3;

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


