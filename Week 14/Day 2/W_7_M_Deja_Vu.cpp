#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>v(n),v1(q);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>v1[i];
        }
        
        int mn = INT_MAX;

        for(ll val : v1)
        {
            if(val < mn)
            {
                int d = (1 << val);
                for(int j = 0;j<n;j++)
                {
                    if(v[j] % d == 0) 
                    {
                        v[j] += (d >> 1);
                    }
                }
                mn = val;
            }
        }

        for(ll val : v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}