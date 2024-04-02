#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);    
      
        long long int n,k;
        cin>>n>>k;
        long long int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        long long int l=0,r=0,ans=0;
        multiset<long long int>ml;
        while(r<n)
        {
            ml.insert(ar[r]);
            long long mn,mx;
            mn=*ml.begin();
            mx=*ml.rbegin();
            if((mx-mn)<=k)
            {
                ans+=(r-l+1);
            }
            else
            {
                while(l<r)
                {
                    mn=*ml.begin();
                    mx=*ml.rbegin();
                    if((mx-mn)<=k)  break;
                    auto it=ml.find(ar[l]);
                    ml.erase(it);
                    l++;    
                }
                mn=*ml.begin();
                mx=*ml.rbegin();
                if((mx-mn)<=k)  ans+=(r-l+1);
            }
            r++;
        }
        cout<<ans;
    
    return 0;
}
