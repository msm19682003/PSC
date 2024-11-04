
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    fast;
    int n,q,i;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int res[n];
    set<int> s;
    for(i=n-1;i>=0;i--)
    {
        s.insert(a[i]);
        res[i]=s.size();
    }
    while(q--)
    {
        int x;
        cin>>x;
        cout<<res[x-1]<<endl;
    }


}




