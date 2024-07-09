#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define endl '\n'
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
ll sieve[1000001];
vector<ll>primes;
void eresthethones()
{
    sieve[0]=1;
    sieve[1]=1;
    for(ll i=2;i*i<=1000000;i++)
    {
        if(sieve[i]==0)
        {
            for(ll j=i+i;j<=1000000;j+=i)
            {
                sieve[j]=1;
            }
        }
    }
    for(int i=0;i<=1000000;i++)
    {
        if(sieve[i]==0)primes.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    eresthethones();
    ll tst;
    cin>>tst;
    for(ll test=1;test<=tst;test++)
    {
        //cout<<"case "<<test<<": ";
        ll d;
        cin>>d;
        ll ans1,pos;
        ll l=0,r=primes.size()-1;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            if(primes[m]-1>=d)
            {
                ans1=primes[m];
                pos=m;
                r=m-1;
            }
            else l=m+1;
        }
        l=pos+1;
        r=primes.size()-1;
        ll ans2;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            if(primes[m]-ans1>=d)
            {
                ans2=primes[m];
                r=m-1;
            }
            else l=m+1;
        }
        cout<<ans1*ans2<<endl;
    }
}