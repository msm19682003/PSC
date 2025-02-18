#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

void solve(){
    long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    long b(0);
    for (long p = 0; p < s.size(); p++){
        if (s[p] == 'B'){
            ++b;
        }
    }
    if (b == k){
        cout << "0";
        nl;
        return;
    }
    char c = (b < k ? 'A' : 'B');
    char d = (b < k ? 'B' : 'A');
    long cnt(b < k ? (k - b) : (b - k)), idx(0);
    for (long p = 0; p < s.size(); p++){
        if (s[p] == c){
            --cnt;
        }
        if (!cnt){
            idx = p + 1;
            break;
        }
    }

    cout << "1";
    nl;
    cout << idx << sp << d;
    nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}