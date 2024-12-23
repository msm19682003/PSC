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
 
    vector<char> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[n-1]=='1'){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> ans;
    int j = n-1;
    while(j>=0){
        int onesCount = 0;
        int zeroCount = 0;
        int tempj = j;
        while(tempj>=0 && arr[tempj]=='0'){
            zeroCount++;
            tempj--;
        }
        while(tempj>=0 && arr[tempj]=='1'){
            onesCount++;
            tempj--;
        }
        
        for(int k=0;k<zeroCount-1;k++){
            ans.push_back(0);
        }
        for(int k=0;k<onesCount;k++){
            ans.push_back(0);
        }
        ans.push_back(onesCount);
        j = tempj;
    }
    cout<<"YES"<<endl;
    for(auto el:ans){
        cout<<el<<" ";
    }
    cout<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}