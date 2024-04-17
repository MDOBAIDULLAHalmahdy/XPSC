#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>v(n+1,0);
        vector<ll>v1(n+1,0);
        for(int i=1;i<=n;i++)    cin>>v[i];
        for(int i=1;i<=n;i++)    v1[i]=v1[i-1]+v[i];

         
         while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
             
            ll sum=v1[n];
            sum-=(v1[r]-v1[l-1]);
            sum+=((r-l+1LL)*k);
            if(sum%2LL==1LL)    cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;
        }
    }
    return 0;
}
