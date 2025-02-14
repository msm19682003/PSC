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
    string a, b;
    cin >> a >> b;
    if(a.front() == b.front())
    {
        py
        cout << b.front() << '*'; nl;
        return;
    }
    if(a.back() == b.back())
    {
        py
        cout << '*' << b.back(); nl;
        return;
    }
    for (int i = 0; i < b.size() - 1; i++)
    {
        string temp = "xx";
        temp[0] = b[i];
        temp[1] = b[i + 1];
        if(a.find(temp) != string::npos)
        {
            py;
            cout << '*' << temp << '*'; nl;
            return;
        }
    }
    pn;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}