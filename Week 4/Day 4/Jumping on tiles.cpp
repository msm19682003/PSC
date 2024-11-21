#include <bits/stdc++.h>
#define ll long long
#define fst ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    ll n,i,j,b,l;
    string s,ss;

    cin>>s;
    l=s.size();
    ss=s;
    sort(ss.begin(),ss.end());

    ll fast=(s[0]-'a')+1;
    ll last=(s[l-1]-'a')+1;

    vector<pair<int,int>> v;

    for(i=0; i<l; i++)
    {
        v.push_back({(s[i]-'a')+1,i+1});
    }

    sort(v.begin(),v.end());

    /*for(auto ele:v)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }*/

    vector<int> res;
    ll sum=0,step=0;

    if(last<=fast)
    {
        i=0;
        while(v[i].second!=1)
        {
            if(v[i].first>=last)
            {
                sum+=v[i+1].first - v[i].first;
                step++;
                res.push_back(v[i].second);
            }

            i++;
        }
        step++;
        res.push_back(v[i].second);

        reverse(res.begin(),res.end());
    }
    else
    {
        i=l-1;
        while(v[i].second!=1)
        {
            if(v[i].first<=last)
            {
                sum+=v[i].first - v[i-1].first;
                step++;
                res.push_back(v[i].second);
            }

            i--;
        }
        step++;
        res.push_back(v[i].second);

        reverse(res.begin(),res.end());
    }


    if(ss[0]==ss[l-1])
    {
        cout<<0<<" "<<l<<endl;
        for(j=1; j<=l; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<sum<<" "<<step<<endl;
        for(auto ele:res)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

