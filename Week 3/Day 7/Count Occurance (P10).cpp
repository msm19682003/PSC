//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int patLen = pat.size();
        int txtLen = txt.size();

        if (patLen > txtLen)
            return 0;

        vector<int> patFreq(26, 0), windowFreq(26, 0);
        int cnt = 0;

        for (int i = 0; i < patLen; i++){
            patFreq[pat[i] - 'a']++;
            windowFreq[txt[i] - 'a']++;
        }

        if (patFreq == windowFreq)
            cnt++;

        for (int i = patLen; i < txtLen; i++){
            windowFreq[txt[i] - 'a']++;
            windowFreq[txt[i - patLen] - 'a']--;

            if (patFreq == windowFreq)
                cnt++;
        }

        return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
