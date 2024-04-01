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
        long long int sum=0,l=0,r=0,ans=INT_MAX;
        while(r<n){
           sum+=ar[r];
           if(sum>=s){
                ans=min(ans,(r-l+1));
                while((sum-ar[l])>=s){
                    sum-=ar[l];
                    l++;
                    ans=min(ans,(r-l+1));
                }
           }
           r++;
        } 
        if(ans == INT_MAX)
            cout<<-1<<'\n';
             
        else
            cout<<ans<<endl;
   
    return 0;
}
