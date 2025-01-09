#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;

const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;

ll n, k;
ll a[200005];

void solve() {
    ll ans,i;
    cin >> n >> k;
    for(i=1;i<=(log2(n)+1);i++)
    {
        ll gap=pow(2,i);
        ll s=(n+(gap/2))/gap;
        if(k<=s)
        {
            if(k==1)
            {
                ans=gap/2;
                cout << ans << '\n';
                return;
            }
            else
            {
                ans=(gap/2) + ((k-1)*gap);
                cout << ans << '\n';
                return;
            }
        }
        else
        {
            k-=s;
        }
    }

    
}

int main() {
    fast;
    int t;
    cin >> t; 
    while (t--) 
    {
        solve();
    }
    
    return 0;
}
