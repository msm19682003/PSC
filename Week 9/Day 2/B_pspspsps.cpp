#include <bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define nl cout << endl
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cntp = 0, cnts = 0;
    int posp = -1, poss = -2;
    for (int i = 0; i < n; i++){
        if (s[i] == 'p'){
            if(posp < 0){
                posp = i;
            }
            cntp++;
        }
        if (s[i] == 's'){
            if(poss < 0){
                poss = i;
            }
            cnts++;
        }
    }

    if (cntp == 0 || cnts == 0){
        py;
        return;
    }

    if (poss <= posp){
        if ((cnts >= 1) && (cntp == 1) && (posp == (n - 1))){
            py;
        }
        else if ((cnts == 1) && (cntp >= 1) && (poss == 0)){
            py;
        }
        else{
            pn;
        }
    }
    else{
        pn;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}