

#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solveA()
{
    int n,i;
    cin>>n;
    cin.ignore();
    string s;
    set<string> st;
    while(n--)
    {
        getline(cin,s);
        st.insert(s);
    }

    cout<<st.size()<<endl;

}



int main()
{
    solveA();
    /*int t;
    cin>>t;
    while(t--)
    {
        solveA();
    }*/
}
