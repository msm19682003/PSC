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
    cin>>n;
    bool flag=true;
    set<int> st;
    ll mx=0;

    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0){
            mx=max(mx,a[i]);
        }
        else{
            st.insert(a[i]-b[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(b[i]==0){
            mx=max(mx,a[i]);
        }
        else if(b[i]>a[i]){
            pn;
            return;
        }
        else{
            st.insert(a[i]-b[i]);
        }
    }
 
    if(st.size()==0){
        py;
    }
    else if(st.size()==1){
        for(auto x:st){
            if(x>=mx){
                py;
                return;
            }
        }
        pn;
    }
    else{
        pn;
    }

}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}