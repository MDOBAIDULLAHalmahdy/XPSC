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
        int n;
        cin>>n;
        map<string,int>mp;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;            
        }
         
        for(int i=0;i<n;i++)
        {
            string s=v[i];
            bool ans=false;
            for(int j=0;j<s.size();j++)
            {
                string a=s.substr(0,j);
                string b=s.substr(j,s.size());
                 if(mp[a]!=0 && mp[b]!=0)
                {
                    ans=true;
                }
            }
            cout<<ans<<"";
        }
        cout<<endl;
         
    }
    
    return 0;
}
 