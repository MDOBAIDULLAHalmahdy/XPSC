#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll lcm(ll a,ll b)
{
    return((a / __gcd(a,b))*b);
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x;
    cin>>x;
    ll ans = x;

    for(ll i=1;i<=sqrt(x);i++) 
    {
        if (x % i == 0) 
        {
            ll a = i;
            ll b = x / i;
            ll lcmv = lcm(a,b);
            if(lcmv == x)
            {
                ans = min(ans,max(a,b));
            }
        }
    }
    cout<<x/ans<<" "<<ans;
    
    return 0;
} 
