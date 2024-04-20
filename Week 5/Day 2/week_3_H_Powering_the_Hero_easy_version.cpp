#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<ll>q;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll l;
            cin>>l;
            if(l==0 && !q.empty())
            {
                ans+=q.top();
                q.pop();
            }
            else 
            {
                q.push(l);
            }
             
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
 