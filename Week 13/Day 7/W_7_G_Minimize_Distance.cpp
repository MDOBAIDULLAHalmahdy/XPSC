#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k,n;
        cin>>n>>k;
        vector<int>pos,neg;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x > 0)
            {
                pos.push_back(x);
            }
            else if(x < 0)
            {
                neg.push_back(-x);
            }
        }
                	
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        ll ans = 0;  	
        for( int i=pos.size()-1;i>=0;i-=k)
        {
            ans += 2*pos[i];
        }
        for( int i=neg.size()-1;i>=0;i-=k)
        {
                		
            ans += 2*neg[i];
        }
                	
        
        int v1,v2;
        if(!pos.empty())   	
        {
            v1 = pos.back();
        }
        else v1 = 0;
        if(!neg.empty())
        {
            v2 = neg.back();
        }
        else v2 =0;
        ans -= max(v1,v2);
        cout<<ans<<endl;
    }
    return 0;
}