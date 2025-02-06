#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

const int N = (int) 1e6+5;

struct Segment_Tree {
    ll ST[N], lazy[N];
    void propagate(int SI, int b, int e) {
        if (lazy[SI] != 0) {
            ST[SI] += lazy[SI];
            if (b != e) {
                lazy[2*SI] += lazy[SI];
                lazy[2*SI+1] += lazy[SI];
            }
            lazy[SI] = 0;
        }
    }
    void build(int SI, int b, int e) {
        if (b == e) {
            ST[SI] = 0;
            return;
        }
        int mid = (b + e) / 2;
        build(2*SI, b, mid);
        build(2*SI+1, mid+1, e);
        ST[SI] = ST[2*SI] + ST[2*SI+1];
    }
    void update(int SI, int b, int e, int l, int r, int val) {
        if (b > r || e < l) return;
        if (b >= l && e <= r) {
            ST[SI] += val;
            return;
        }
        int mid = (b + e) / 2;
        update(2*SI, b, mid, l, r, val);
        update(2*SI+1, mid+1, e, l, r, val);
        ST[SI] = ST[2*SI] + ST[2*SI+1];
    }
    ll query(int SI, int b, int e, int l, int r) {
        if (b > r || e < l) return 0;
        if (b >= l && e <= r) return ST[SI];
        int mid = (b + e) / 2;
        return query(2*SI, b, mid, l, r) + query(2*SI+1, mid+1, e, l, r);
    }
} STree;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    STree.build(1, 1, n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += STree.query(1, 1, n, a[i], n);
        STree.update(1, 1, n, a[i], a[i], 1);
    }
    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}