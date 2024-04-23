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
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        map<ll,vector<ll>>mp;
 
        for(ll i=0;i<n;i++)
        {
            ll p;
            cin>>p;
            mp[p].push_back(i);
        }
        while(q--)
        {
            ll i,j;
            cin>>i>>j;
            if(mp[i].empty() || mp[j].empty()){
                cout<<"NO"<<endl;
                continue;
            }    
            if(i==j)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(mp[i].front() < mp[j].back())
            {
                cout<<"YES"<<endl;
                continue;
            } 
            else cout<<"NO"<<endl;
            
 
        }
        
    }
    
    return 0;
}