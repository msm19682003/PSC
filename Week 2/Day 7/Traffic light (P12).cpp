#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define sp ' '
using namespace std;


void solve() {
    int n,i,j=-1;
    char c;
    string s,ss;

    cin >> n>>c>>s;
    ss=s+s;

    int ans=0,l=ss.size();

    for(i=0;i<l;i++)
    {
        if(ss[i]==c && j==-1)
        {
            j=i;
        }
        else if(ss[i]=='g')
        {
            if(j!=-1)
            {
              ans=max(ans,(i-j));
              j=-1;
            }
        }
    }
    if(c=='g')
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }


}
int main() {

    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}
