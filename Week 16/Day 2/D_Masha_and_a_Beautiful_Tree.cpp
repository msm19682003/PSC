#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

int ans = 0;
vector<int> a;

void Call(int l1, int r1, int l2, int r2) {
    int mxL = *max_element(a.begin() + l1, a.begin() + r1 + 1);
    int mnR = *min_element(a.begin() + l2, a.begin() + r2 + 1);

    if (mxL > mnR) {
        int R = l2;
        for (int i = l1; i <= r1; i++, R++) swap(a[i], a[R]);
        ans++;
    }
    if (l1 == r1) return;

    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;

    Call(l1, mid1, mid1 + 1, r1);
    Call(l2, mid2, mid2 + 1, r2);
}

void solve() {
    int n;
    cin >> n;
    a.resize(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    ans = 0;
    if (is_sorted(a.begin() + 1, a.begin() + n + 1)) {
        cout << 0 << '\n';
        return;
    }

    int mid = (n + 1) / 2;
    Call(1, mid, mid + 1, n);

    cout << (is_sorted(a.begin() + 1, a.begin() + n + 1) ? ans : -1); nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}