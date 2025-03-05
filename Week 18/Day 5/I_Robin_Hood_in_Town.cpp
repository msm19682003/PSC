#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' ' 
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl '\n'
#define pb push_back
using namespace std;


void solve() {
    long long n;
      cin>>n;
      long long arr[n+10],sum=0;
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
      }
      if(n==1 || n==2)
      {
          cout<<-1<<nl;
          return;
      }
      long long l=0,r=1e18,ans=-1;
      while(l<=r)
      {

          long long mid=(l+r)>>1;
          long long avg=(mid+sum+n-1)/n;
          long long half;
          if(avg%2==0)
          {
              half=avg/2;
          }
          else
          {
              half=(avg+1)/2;
          }
          long long cnt=0;
          for(int i=1;i<=n;i++)
          {
              if(arr[i]<half)
              {
                  cnt++;
              }
          }
          long long need=n/2;
          if(need<cnt && n%2==0)
          {
              ans=mid;
              r=mid-1;
          }
          else if(need+1<=cnt)
          {
              ans=mid;
              r=mid-1;
          }
          else
          {
              l=mid+1;
          }

      }
      cout<<ans<<nl;
}

int main() {
    fast;
    int t;
    cin >> t; while(t--)
    solve();
    return 0;
}