#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a[26]={0};
        int ct=0;
        int n,k;
        string s;

        cin>>n>>k;         
        cin>>s;                  
           
        for(auto c:s)
            a[c-'a']++;
         
        for(int i=0;i<26;i++)
            if(a[i]%2!=0)   ct++; 

        if(n%2 == 0 && ct==0) cout<<"YES"<<endl;
        else if(n%2 != 0 && ct==1) cout<<"YES"<<endl;
        else if(n%2==0 && (ct-k)==0) cout<<"YES"<<endl;
        else if(n%2 != 0 && (ct-k)==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

         

         
       
    }
    
    return 0;
}
