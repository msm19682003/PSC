#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n, i, j;

    string s,res="";
    cin>>s;
    n=s.size();

    stack<int>u;
    stack<int>l;


    for(i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
        {
            u.push(i);
        }
        else if(s[i]>='a' && s[i]<='z' && s[i]!='b')
        {
            l.push(i);
        }
        if(s[i]=='b')
        {
            s[i]='$';
            if(!l.empty())
            {
                ll pos=l.top();
                s[pos]='$';
                l.pop();
            }
        }
        else if(s[i]=='B')
        {
            s[i]='$';
            if(!u.empty())
            {
                ll pos=u.top();
                s[pos]='$';
                u.pop();
            }

        }

    }





    for(i=0; i<n; i++)
    {
        if(s[i]!='$')
        {
            cout << s[i];
        }
    }

    cout<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solveA();
    }
    return 0;
}




