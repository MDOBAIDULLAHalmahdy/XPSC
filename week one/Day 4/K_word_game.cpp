#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n];
        string b[n];
        string c[n];
         
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            cin>>c[i];        
         
         
        map<string,int>mp;
        for(auto s:a)mp[s]++;
        for(auto s:b)mp[s]++;
        for(auto s:c)mp[s]++;
        
        int cta=0,ctb=0,ctc=0;
        for(auto s:a)
        {
            if(mp[s]==3)continue;
            else if(mp[s]==2) cta+=1;
            else cta+=3;
        } 
        for(auto s:b)
        {
            if(mp[s]==3)continue;
            else if(mp[s]==2) ctb+=1;
            else ctb+=3;
        } 
        for(auto s:c)
        {
            if(mp[s]==3)continue;
            else if(mp[s]==2) ctc+=1;
            else ctc+=3;
        } 

        cout<<cta<<" "<<ctb<<" "<<ctc<<endl;    
     
             
    }
         
        
    return 0;
}
