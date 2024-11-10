#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,l,i;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    set<string> st;
    string res="";

    for(auto ele:v)
    {
        if(st.find(ele)==st.end())
        {
            st.insert(ele);
            ll len=ele.size();
            res+=ele.substr(len-2,2);
        }
    }
    cout<<res<<endl;

}
int main()
{

    solve();

    return 0;
}



