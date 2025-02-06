#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    fast;
    
    ordered_set<int> st;
    vector<vector<int>> vec(26);
    map<int, int> m;
    int n;
    string s;
    
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        vec[s[i] - 'a'].push_back(i);
    }
    
    reverse(s.begin(), s.end());
    long long ans = 0;
    
    for (int i = 0; i < n; i++) {
        int x = s[i] - 'a';
        int v = vec[x][m[x]++];
        st.insert(v);
        int choto = st.order_of_key(v);
        v -= choto;
        ans += v;
    }
    
    cout << ans << endl;
    return 0;
}