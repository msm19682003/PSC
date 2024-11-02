#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    fast;
    int n,x,i;
    cin>>n>>x;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val!=x)
        {
            v.push_back(val);
        }

    }

    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}
