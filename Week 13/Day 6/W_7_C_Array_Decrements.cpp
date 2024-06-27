#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>v1(n);
        for (int j=0;j<n;j++)
        {
            cin>>v1[j];
        }
        int mx = 0;
        for (int k=0;k<n;k++)
        {
            mx = max(mx,v[k] - v1[k]);
        }
        bool flag = true;
        for (int j=0;j<n;j++)
        {
            if (v1[j] != max(v[j] - mx,0))
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}