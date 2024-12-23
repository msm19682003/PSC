#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    string ans = "";
 
    int e1 = 0, e2 = 0;
    int w1 = 0, w2 = 0;
    int n1 = 0, n2 = 0;
    int s1 = 0, s2 = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            if (n1 <= n2)
            {
                n1++;
                ans.push_back('R');
            }
            else
            {
                n2++;
                ans.push_back('H');
            }
        }
 
        if (s[i] == 'S')
        {
            if (s1 <= s2)
            {
                s1++;
                ans.push_back('R');
            }
            else
            {
                s2++;
                ans.push_back('H');
            }
        }
 
        if (s[i] == 'E')
        {
            if (e2 <= e1)
            {
                e2++;
                ans.push_back('H');
            }
            else
            {
                e1++;
                ans.push_back('R');
            }
        }
 
        if (s[i] == 'W')
        {
            if (w2 <= w1)
            {
                w2++;
                ans.push_back('H');
            }
            else
            {
                w1++;
                ans.push_back('R');
            }
        }
    }
 
 
    if(((n1+s1+e1+w1)==0) || ((n2+s2+e2+w2)==0))
    {
          cout<<"NO"<<endl;
          return;
    }
 
    int mn = min(n1, s1);
    n1 -= mn;
    s1 -= mn;
 
    mn = min(e1, w1);
    e1 -= mn;
    w1 -= mn;
 
    mn = min(n2, s2);
    n2 -= mn;
    s2 -= mn;
 
    mn = min(e2, w2);
    e2 -= mn;
    w2 -= mn;
 
    if((w1!=w2) || (e1!=e2) || (s1!=s2) || (n1!=n2))
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}