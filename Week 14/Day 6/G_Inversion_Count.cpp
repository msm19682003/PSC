#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

const int mx = 200005;
int tree[mx * 4], arr[mx], arr2[mx];

void update(int pos, int b, int e, int i, int j) {
    if (b > e || b > j || e < i) return;
    if (b >= i && e <= j) {
        tree[pos] += 1;
        return;
    }
    int m = (b + e) / 2;
    int l = pos * 2, r = l + 1;
    update(l, b, m, i, j);
    update(r, m + 1, e, i, j);
    tree[pos] = tree[l] + tree[r];
}

int query(int pos, int b, int e, int i, int j) {
    if (b > e || b > j || e < i) return 0;
    if (b >= i && e <= j) return tree[pos];
    int m = (b + e) / 2;
    int l = pos * 2, r = l + 1;
    return query(l, b, m, i, j) + query(r, m + 1, e, i, j);
}

void solve() {
    int n;
    cin >> n;
    memset(tree, 0, sizeof tree);
    vector<int> arr(n + 1), arr2(n);
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr2[i - 1] = arr[i];
    }
    sort(arr2.begin(), arr2.end());
    
    int val = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(arr2[i]) == mp.end())
            mp[arr2[i]] = ++val;
    }
    
    ll ans = 0;
    for (int i = n; i > 0; i--) {
        int a = mp[arr[i]];
        ans += query(1, 1, val, 1, a - 1);
        update(1, 1, val, a, a);
    }
    cout << ans << "\n";
}


int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}