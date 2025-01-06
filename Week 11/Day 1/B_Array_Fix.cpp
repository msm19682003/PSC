#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
using namespace std;


void solve() {
    int n;
	cin>>n;
	int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

	int mx=INT_MAX;
	for(int i = n-1; i>=0; i--){
		
		if(a[i]<=mx){
			mx=min(mx,a[i]);
		}

		else{
			vector <int > v1;
			int z1=a[i];
			while(z1>0){
				v1.push_back((z1%10));
				z1=z1/10;
			}

			for(int j = 0; j<v1.size(); j++){
				if(v1[j]>mx){
					pn
					return;
				}
				else{
					mx=min(mx,v1[j]);
				}
			}
		}
	}
	py;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}