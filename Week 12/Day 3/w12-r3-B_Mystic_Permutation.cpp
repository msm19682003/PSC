#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    int n;
    cin>>n;
    int a[n+5], b[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            continue;
        if(i+1<n)
            swap(b[i],b[i+1]);
        else if(i-1>0)
            swap(b[i],b[i-1]);
        else 
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}