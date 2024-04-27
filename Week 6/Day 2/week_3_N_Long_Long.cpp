#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;    cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)  cin>>v[i];
        ll sum=0,ct=0;
        bool seg=false;
        for(ll i=0;i<=n;i++){             
            if(i<n) sum+=abs(v[i]);
            if(seg){
                if(i==n or v[i]>0){
                    ct++;
                    seg=false;
                }               
            }
            else if(v[i]<0) seg=true;         
        }         
        cout<<sum<<" "<<ct<<endl;        
    }    
    return 0;
}
 