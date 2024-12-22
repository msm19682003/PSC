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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    sort(a.begin(), a.end());
 
    bool trtl = 1, pgg = 0;
    while (a.size() > 1)
    {
        if (trtl)
        {
            a.erase(a.begin());
            trtl = 0;
            pgg = 1;
        }
        else if (pgg)
        {
            
            a.erase(a.end()-1);
            trtl = 1;
            pgg = 0;
        }
    }
    cout << a[0] << '\n';
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}