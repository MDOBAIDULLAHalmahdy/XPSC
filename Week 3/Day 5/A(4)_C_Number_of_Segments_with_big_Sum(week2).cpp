#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);    
      
        long long int n,s;
        cin>>n>>s;
        long long int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        long long int sum=0,l=0,r=0,ans=0;
        while(r<n){
           sum+=ar[r];            
            while(sum >= s)
            {
                ans += n - r;
                sum -= ar[l];
                l++;
            }

           r++;
        } 
        cout<<ans<<endl;
   
    return 0;
}
