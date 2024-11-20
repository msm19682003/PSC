#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[i]=(i+1)+a[i];
    }

    sort(b.begin(),b.end());
    ll s=0,res=0;
    for(int i=0;i<n;i++)
    {
        s+=b[i];
        if(s>k)
        {
            break;
        }
        else
        {
            res++;
        }
    }

    cout<<res<<endl;

}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

