#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string b;
        cin>>b;
        int c=0;
        for(auto i:b)
        {
            if(i=='1')
                c++;
        }
        if(b=="1"||b=="10")
        {
            cout<<"NO"<<endl;
        }else if(c<=3)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
 