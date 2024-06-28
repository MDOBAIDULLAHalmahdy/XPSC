#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;            
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
 
        vector<ll>fq(n+2,0);
        for(int i=0;i<n;i++)
        {
            if(v[i] > n)
            {
                continue;
            }
            fq[v[i]]++;
        }
 
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ll here=0;
            for(ll x=1;x*x<=i;x++)
            {
                if(i % x == 0)
                {
                    here+=fq[x];
                    if(x*x!=i)
                    {
                        here += fq[i/x];
                    }
                }
            }
            ans=max(ans,here);
        }
        cout<<ans<<endl;
    }
    return 0;
}