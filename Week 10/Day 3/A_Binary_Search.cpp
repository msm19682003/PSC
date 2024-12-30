#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;
int n, k;
int arr[100009];
bool binarySearch(int x)
{
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return true;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return false;
}
void solve() {
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<k; i++){
        int x; cin >> x;
        if(binarySearch(x)){
            py;
        }
        else pn;
    }
}


int main() {
    fast;
    int t;
    // cin >> t; while(t--);
    solve();
    return 0;
}