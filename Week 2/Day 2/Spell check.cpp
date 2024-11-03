
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
        int n;
        cin>>n;
        string s,ss="Timur";
        cin>>s;
        sort(ss.begin(),ss.end());
        sort(s.begin(),s.end());
        if(s==ss)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }
    }


}


