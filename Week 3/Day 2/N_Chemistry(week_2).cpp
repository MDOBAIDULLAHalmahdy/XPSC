#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a[26]={0};
        //int ct=0;
        int n,k;
        string s;

        cin>>n>>k;         
        cin>>s;                  
           
        map<char,int>mp;
 
        for(char c : s) mp[c]++;
        int ct = 0;
        for(auto it : mp)
            if(it.second % 2 != 0) ct++;
        
        if(k >= ct-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
