#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n; 
        map<int,int> mp; 
        for(int i=0;i<n;i++) 
        {
            int val; cin >> val; 
            mp[val]++; 
        }
        auto it = mp.begin(); 
        int ans = it->second; 
        int last_val = it->second;
        int last_key = it->first;
        it++; 
        for(;it !=mp.end();it++)
        {
            if(it->first !=last_key+1) ans+=it->second;
            else {ans+= max(0,it->second - last_val);}
            last_key = it->first; 
            last_val = it->second;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
 