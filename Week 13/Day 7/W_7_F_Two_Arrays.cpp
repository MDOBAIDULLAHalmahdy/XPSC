#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>a(n),b(n);
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
 
        bool flag = false;
 
        for(int i=0;i<n;i++)
        {
            if(b[i] - a[i] != 0 && b[i] - a[i] != 1)
            {
                flag = true;
                break;
            }
        }
 
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}