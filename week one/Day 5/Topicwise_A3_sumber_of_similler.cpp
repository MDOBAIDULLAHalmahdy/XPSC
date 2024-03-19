#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    for(int i=0;i<m;i++)
        cin>>b[i];

    int l=0,r=0;
    long long int ans=0;
    while(l<n && r<m)
    {
        int ct1=0,ct2=0,curr=a[l];
        while( a[l]==curr && l<n)
        {
            ct1++;
            l++;
        }
        while(curr>b[r] && r<m)
        {
            r++;
        }
        while( b[r]==curr && r<m)
        {
            ct2++;
            r++;
        }
        ans+=( 1LL * ct1 *ct2);

    }
    cout<<ans;  

  
    
    return 0;
}
