#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

const int N = 100001;

ll A[N], B[N], C[N], M[N][3];

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    memset(A, 0, sizeof(A));
    memset(B, 0, sizeof(B));
    memset(C, 0, sizeof(C));
    memset(M, 0, sizeof(M));
    
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) cin >> M[i][j];
        M[i][0]--, M[i][1]--;
    }
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        C[a]++, C[b + 1]--;
    }
    
    ll tmp = 0;
    for (int i = 0; i < m; i++) {
        tmp += C[i];
        B[M[i][0]] += tmp * M[i][2];
        B[M[i][1] + 1] -= tmp * M[i][2];
    }
    
    tmp = 0;
    for (int i = 0; i < n; i++) {
        tmp += B[i];
        cout << tmp + A[i] << " ";
    }
    cout << "\n";
}


int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}