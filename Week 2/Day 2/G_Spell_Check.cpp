
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s,s1;
        s="Timur";
        cin>>s1;
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        if(s==s1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;         
    }
    return 0;
}