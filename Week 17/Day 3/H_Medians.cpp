#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    int n,m;
    cin>>n>>m;
 
    if(n==1 && m==1)
    {
        cout<<1<<endl<<1<<endl;
    }
    else if(n==m || m==1)
    {
        cout<<-1<<endl;
    }
    else if(m%2==0)
    {
        cout<<3<<endl;
        cout<<1<<" "<<m<<" "<<m+1<<endl;
    }
    else if(m%2!=0)
    {
        cout<<3<<endl;
        cout<<1<<" "<<m-1<<" "<<m+2<<endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}