#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll neg = 0, sum = 0, mn = LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if (v[i] < 0)
            {
                neg++;
            }
            sum += abs(v[i]);
            mn = min(mn,abs(v[i]));
        }
        if(neg % 2 == 1)
        {
            sum -= (2*mn);
        }
        cout<<sum<<endl;
    }
    return 0;
}