#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0);
using namespace std;
const ll m = 1e9+7;
int main() 
{
	// your code goes here
	fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,i;
        cin >> n;
        int fact = 1;
        for(i=1;i<=n;i++)
        {
            fact = (1LL * fact % m * i %m)% m;
        }
        cout << fact << endl;
    }
}