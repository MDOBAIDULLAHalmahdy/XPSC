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
        int n,b;
        string s;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
                 
        for(int i=0;i<n;i++)
        {
            cin>>b;
            cin>>s;
            for(auto c:s)
            {
               if(c=='U')
               {
                    if(a[i]==0)
                        a[i]+=9;
                    else
                        a[i]--;
                    //a[i]%10;
               }    
               if(c=='D')
               {
                    a[i]++;
                    //a[i]%10;
               }    
               //if(c=='D')   a[i]++; 
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]%10<<" ";
        cout<<endl;
    }
    
    return 0;
}
