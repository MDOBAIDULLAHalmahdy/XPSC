#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define hello() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define pb push_back
#define mod 1000000007
#define elif else if
#define cntbit __builtin_popcount
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
const bool cmp(const ll &a, const ll &b)
{
    if((a&1)==(b&1))return a<b;
    return (a&1) < (b&1);
}

void solve()
{

 ll n,l,r,x;cin>>n>>l>>r>>x;
 vector<int>v(n);
 ll cnt=0;
 for(int i=0;i<n;i++)cin>>v[i];
 for(int mask=0;mask<(1<<n);mask++){
    int mn=INT_MAX,mx=INT_MIN,sum=0,num=0;
    for(int i=0;i<n;i++){
        if(mask &(1<<i)){
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
            sum+=v[i];
            num++;
        }
    }
    if(num>=2 && (sum>=l && sum<=r )&& mx-mn>=x)cnt++;
 }
 cout<<cnt;

}
int main()
{
    hello();
    solve();

}


