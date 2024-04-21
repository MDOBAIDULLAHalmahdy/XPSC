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
        ll n;
        ll k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
            cin>>v[i];        

        ll l=0,r=0,ans=0;
        while(r<n){
            if(v[r]<=q){                 
                if(r-l+1>=k){
                    int s=r-l+1;
                    ans+=s-(k-1);                     
                }
                r++;
            }
            else{
                r++;
                l=r;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
 