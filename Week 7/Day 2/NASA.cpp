#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;
const int mx = (1LL << 15);

vector<int> allPalindrome;


bool isPalindrome(int x){
    string s = to_string(x);
    int len = s.length();
    for(int i = 0; i< len/2; i++){
        if(s[i] != s[len-i-1]){
            return false;
        }
    }
    return true;
}

void markPalindrome(){
    for(int i = 0; i<mx; i++){
        if(isPalindrome(i)){
            allPalindrome.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), cnt(mx + 1);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll ans = n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j< allPalindrome.size(); j++){
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
        }
    }

    cout << ans/2 << endl;
}

int main() {
    fast;
    int t;
    markPalindrome();
    cin >> t; while(t--)
    solve();
    return 0;
}