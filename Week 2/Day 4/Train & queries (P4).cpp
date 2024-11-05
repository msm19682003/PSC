#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


void solve()
{
    ll n,q,i,x;
    cin>>n>>q;

    map<ll,set<ll> > mp;


    for(i=0; i<n; i++)
    {
        cin>>x;
        mp[x].insert(i);
    }

    /*for(auto itm:mp)
    {
        cout<<itm.first<<"-->";
        for(auto ind:itm.second)
        {
            cout<<ind<<" ";
        }
        cout<<endl;
    }*/

    while(q--)
    {
        ll a,b;
        cin>>a>>b;

        if(mp.find(a)==mp.end() || mp.find(b)==mp.end())
        {
            cout<<"NO\n";
        }

        else
        {
            ll start_ind= *mp[a].begin();
            ll end_ind= *mp[b].rbegin();

            //cout<<start_ind<<" "<<end_ind<<endl;

            if(end_ind>start_ind)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


}




