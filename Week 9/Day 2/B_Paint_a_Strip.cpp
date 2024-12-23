#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;


void solve() {
    long long n;
    cin>>n;
    if(n<3){
        cout<<n<<endl;
    }
    else if(n>3){
        long long sum=4,ans=2;
        while(sum<n){
            ans++;
            sum++;
            sum*=2;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
int main(){
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}