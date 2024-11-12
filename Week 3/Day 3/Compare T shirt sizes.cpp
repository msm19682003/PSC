#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string s,ss;
    int l,w;
    cin>>s>>ss;
    l=s.size();
    w=ss.size();

    if(s==ss)
    {
        cout<<"=\n";
    }
    else
    {
        if(s[l-1]==ss[w-1] && s[l-1]=='S')
        {
            if(l>w)
            {
                cout<<"<\n";
            }
            else
            {
                cout<<">\n";
            }
        }
        else if(s[l-1]==ss[w-1] && s[l-1]=='L')
        {
            if(l>w)
            {
                cout<<">\n";
            }
            else
            {
                cout<<"<\n";
            }
        }
        else
        {
            if((s[l-1]=='L' || s[l-1]=='M') && ss[w-1]=='S')
            {
                cout<<">\n";
            }
            else if(s[l-1]=='L' && ss[w-1]=='M')
            {
                cout<<">\n";
            }
            else
            {
                cout<<"<\n";
            }
        }
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
}
