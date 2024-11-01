#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    ll n, i, j;
    cin >> n;
    vector<string> a[3];
    map<string, int> mp;

    string s;
    for(j=0; j<3; j++)
    {
        for (i = 0; i < n; i++)
        {
            cin >>s;
            a[j].push_back(s);
            mp[s]++;
        }

    }

    for(j=0; j<3; j++)
    {
        ll res=0;
        for (auto ele:a[j])
        {
            if(mp[ele]==3)
            {
                res+=0;
            }
            else if(mp[ele]==2)
            {
                res+=1;
            }
            else
            {
                res+=3;
            }
        }

        cout << res<<" ";
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




