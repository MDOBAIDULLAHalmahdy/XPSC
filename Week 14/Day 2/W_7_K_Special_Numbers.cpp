#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=0;
        ll p=1;
        int mod = 1e9 + 7;
        for(int i=0;i<31;i++)
        {
            if(k & (1<<i))
            {
                ans = (ans + p) % mod;
            }
            p = (p * n) % mod;
        }
       cout<<ans<<endl;
    }
    return 0;
}