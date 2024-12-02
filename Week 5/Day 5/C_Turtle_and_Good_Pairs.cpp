#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    
    if (mp.size() == 1) {
        cout << s << endl; 
        return;
    }
    
    vector<pair<int, char>> freq;
    for (auto [ch, cnt] : mp) {
        freq.push_back({cnt, ch});
    }
    sort(freq.rbegin(), freq.rend()); 
    
    string res(n, ' ');
    int id = 0; 
    for (auto [cnt, ch] : freq) {
        for (int i = 0; i < cnt; i++) {
            if (id >= n) {
                id = 1; 
            }
            res[id] = ch;
            id += 2;
        }
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
