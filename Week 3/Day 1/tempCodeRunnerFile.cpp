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
        int n;
        string s;
        cin>>n>>s;

        for(int i=0;i<n;i++)
            s[i]=tolower(s[i]);

        string ss;
        ss.push_back(s[0]);
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])    ss.push_back(s[i]);
        }
        if(ss=="meow")   cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;


    }
        
    return 0;
}
