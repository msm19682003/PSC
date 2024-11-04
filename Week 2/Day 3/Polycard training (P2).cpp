#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    fast;
    int n,i,res=0;
    cin>>n;
    int x;
    multiset<int> s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }

    for(i=1;i<=n;i++)
    {
        auto it=s.lower_bound(i);
        if(it!=s.end())
        {
            res++;
            s.erase(it);
        }
    }

    cout<<res<<endl;


}





