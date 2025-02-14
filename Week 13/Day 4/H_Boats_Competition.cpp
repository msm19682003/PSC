#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;


void solve() {
    int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
        
	map<int,int> cnt;
	int mx=0;
	bool check[n+1][110]={};
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(!check[i][a[i]+a[j]] && !check[j][a[i]+a[j]])
			{
				cnt[a[i]+a[j]]++;
				check[i][a[i]+a[j]]=true;
				check[j][a[i]+a[j]]=true;
				mx=max(mx,cnt[a[i]+a[j]]);
			}
		}
	}
	cout<<mx<<endl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}