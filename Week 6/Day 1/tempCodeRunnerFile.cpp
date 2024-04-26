#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        priority_queue<ll>q;
        priority_queue<ll>q1;
        for(ll i=0;i<n;i++)
        {
            ll p;
            cin>>p;
            q.push(p);
        }
        for(ll i=0;i<m;i++)
        {
            ll p;
            cin>>p;
            q1.push(p);
        }
        ll sum=0;
        while(n>0 && m>0)
        {
            ll p,p1;
            p=q.top();
            q.pop();

            p1=q1.top();
            q1.pop();
            
            if((h*p1)<p) sum+=h*p1;
            else sum+=p;

            n--;
            m--;
        }
        cout<<sum<<endl;        
    }
    
    return 0;
}
 