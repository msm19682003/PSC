#include <bits/stdc++.h>
#define ll long long int
#define sp ' '
#define nl cout << endl
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n), res(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        cin >> res[i];
    }

    ll curr = arr[0], ans = 0, i = 0, j = 1;

    if (curr <= k)
        ans = 1;

    while (j < n){
        if (res[j - 1] % res[j] == 0)
            curr += arr[j];
        else{
            curr = arr[j];
            i = j;
        }

        while (curr > k){
            curr -= arr[i++];
        }

        ans = max(ans, j - i + 1);
        j++;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}