#include <bits/stdc++.h>
using namespace std;

const int MAX_X = 1000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> divisor_count(MAX_X + 1, 0);

    for (int i = 1; i <= MAX_X; i++) {
        for (int j = i; j <= MAX_X; j += i) {
            divisor_count[j]++;
        }
    }

    int n;
    cin >> n;
    vector<int> results(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        results[i] = divisor_count[x];
    }
    
    for (int res : results) {
        cout << res << "\n";
    }

    return 0;
}
