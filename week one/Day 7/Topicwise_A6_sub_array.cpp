//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:
int search(string pat, string txt) 
{
     vector<int>v(26);
     vector<int>v1(26);
     
     for(auto it:pat)
        v[it-'a']++;
 
    int ans = 0;
    int k = pat.size();
    int l = 0, r = 0;
    int n = txt.size();
    
    while (r < n){
        v1[txt[r]-'a']++;
        if (r-l+1==k)
        {
            if(v==v1) ans++;
            
            v1[txt[l]-'a']--;
            l++;
            r++;
        }
        else
            r++;
        
    }
 
    return ans;
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
    }
    return 0;
}
// } Driver Code Ends