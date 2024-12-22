#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> m2;
 
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    vector<int> temp=v;
    sort(temp.begin(),temp.end());

    map<int,set<int>> m;
    for(int i=0;i<n;i++){
        m[i%k].insert(v[i]);
    }
 
    for(int i=0;i<n;i++){
        auto chk=m[i%k];
        if(chk.find(temp[i])==chk.end()){
            m2[i%k]++;
        }
    }
    if(m2.size()==0){
        cout<<"0"<<endl;
        return;
    }
 
    int cnt=0;
    for(auto x:m2){
        if(x.second==1){
            cnt++;
        }
        else{
            cnt+=100;
        }
    }
    if(cnt==2){
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}