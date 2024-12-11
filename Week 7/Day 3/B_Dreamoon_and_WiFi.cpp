#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;

    double ans = 0;
    int dis1 = 0, dis2 = 0, confused = 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] == '+')
            dis1++;
        if (s1[i] == '-')
            dis1--;

        if (s2[i] == '+')
            dis2++;
        if (s2[i] == '-')
            dis2--;

        if (s2[i] == '?')
            confused++;
    }

    int diff = dis1 - dis2, matched = 0;
    for (int i = 0; i < (1 << confused); i++){
        int distance = 0;
        for (int j = confused - 1; j >= 0; j--){
            if ((i >> j) & 1){
                distance++;
            }
            else{
                distance--;
            }
        }

        if (diff == distance){
            matched++;
        }
    }
    ans = (double)matched / (double)(1 << confused);
    printf("%.12f\n", ans);
}

int main(){
    fast;
    int t;
    solve();
    return 0;
}