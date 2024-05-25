#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
  
        ll sum=b;
 
        for(int i=0;i<n;i++)
        {
            sum+=min(a-1,v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}