#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for (ll i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        ll l = 1, r = INT_MAX;
        ll ans = 0;
        while(l <= r) 
        {
            ll mid = (r+l)/2;
            ll ttl = 0;
            for (ll i=0;i<n;i++) 
            {
                if(mid > v[i])
                {
                    ttl += (mid - v[i]);
                }
            }
            if(ttl <= x) 
            {
                ans = mid;
                l = mid + 1;
            }
            else 
            {
                r = mid - 1;
            }
        }
        cout<<ans<<endl;;
    }
    return 0;
}