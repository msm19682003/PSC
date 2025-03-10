#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;
int arr[100003];
int n;

int upperBound(int x)
{
    int low = 0, high = n - 1, pos = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
        {
            pos = mid;  
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return pos;
}

void solve() {
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        cout << upperBound(x) << endl;
    }
}

int main() {
    fast;
    int t;
    // cin >> t; while(t--)
    solve();
    return 0;
}