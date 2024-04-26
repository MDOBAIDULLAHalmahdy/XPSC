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
        vector<int>v(n);
        map<int,int>mp;
        int ct=0; 
        for(int i=0;i<n;i++)  cin>>v[i];         
           
        for(int i=v.size()-1; i>=0;i--){
            if(mp[v[i]]==0){
                ct++;
                mp[v[i]]++;
            }
            else  break;
        }
        cout<<v.size()-ct<<endl; 
    }    
    return 0;
}
 