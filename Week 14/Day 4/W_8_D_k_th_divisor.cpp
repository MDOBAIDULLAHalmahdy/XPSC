#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    //int t;
    //cin>>t;
    //while(t--)
    //{
        
    //}
    ll n,k;
    cin>>n>>k;
    //int cnt=0;
    vector<ll>v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n % i == 0)
        {
           v.push_back(i);
           if(n/i != i)
           {
                v.push_back(n/i);
           }
        }
    }
    sort(v.begin(),v.end());
    if(k > v.size()) 
    {
        cout<<-1<<endl;
    }
    else cout<<v[k-1]<<endl;
    return 0;
}