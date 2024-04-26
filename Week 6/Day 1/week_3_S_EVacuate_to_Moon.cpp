
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){        

    ll n,m,h;
    cin>>n>>m>>h;
    ll A[n],B[m];
    for(ll i=0;i<n;i++)
    cin>>A[i];
    for(ll i=0;i<m;i++)
    cin>>B[i];

    sort(A,A+n,greater<ll>());
    sort(B,B+m,greater<ll>());
    ll ans=0;
    for(ll i=0;i<min(m,n);i++)
    {
      ans+=min(A[i],B[i]*h);
    }   
    cout<<ans<<endl;
    }
}