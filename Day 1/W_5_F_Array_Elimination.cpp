#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
 
        int bcnt[33]={0}; // bit count 
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<33;j++)
            {
               if((v[i]>>j) & 1)
               {
                   bcnt[j]++;
               }
            }
        } 
 
        for(int k=1;k<=n;k++)
        {
            bool flag=true;
            for(int i=0;i<33;i++)
            {
              if(bcnt[i] % k != 0)
              {
                   flag=false;
              }
            }
            if(flag) cout<<k<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}