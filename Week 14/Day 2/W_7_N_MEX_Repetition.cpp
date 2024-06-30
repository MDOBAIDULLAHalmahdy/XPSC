#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll>v1(n+1,1);
        for(int val : v)
        {
            v1[val] = 0;
        }
        for(int i=0;i<n+1;i++)
        {
           if(v1[i] == 1)
           {
                v.push_back(i);
                break;
           }
        }

        ll d = (k * n) % (n+1);
        vector<ll>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(v[d]);
            d = (d+1) % (n+1);
        }

        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}