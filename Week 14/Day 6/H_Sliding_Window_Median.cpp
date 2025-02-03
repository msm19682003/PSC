#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

const ll inf = INT_MAX;
const ll md = 1000000007;
const int mx = 200005;

void solve() {
    int n, k;
    cin >> n >> k;
    priority_queue<pair<int, int>> left; // max heap (lower half)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> right; // min heap (upper half)
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int median_index = (k + 1) / 2, balance = 0;
    for (int i = 0; i < n; i++) {
        while (!right.empty() && right.top().second <= i - k) right.pop();
        while (!left.empty() && left.top().second <= i - k) left.pop();
        
        if (balance < median_index) {
            right.push({a[i], i});
            left.push(right.top()); right.pop();
            balance++;
        } else {
            left.push({a[i], i});
            right.push(left.top()); left.pop();
        }
        
        while (!right.empty() && right.top().second <= i - k) right.pop();
        while (!left.empty() && left.top().second <= i - k) left.pop();
        
        if (i < k - 1) continue;
        cout << left.top().first << sp;
        if (a[i - k + 1] <= left.top().first) balance--;
    }
    nl;
}

int main() {
    fast;
    int t = 1;
    while (t--) solve();
    return 0;
}