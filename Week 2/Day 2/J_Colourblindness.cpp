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
        string s1,s2;
        cin>>s1>>s2;
        //cout<<s1<<" "<<s2<<endl;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            //cout<<s1[i]<<" "<<s2[i]<<endl;
            if(s1[i]=='R' && s2[i]=='R') ct++;
            else if(s1[i]!='R' && s2[i]!='R') ct++;
             

        }
        if(ct==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         

    }
    return 0;
}
