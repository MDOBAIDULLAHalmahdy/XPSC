#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool ans(int n,vector<int>& v)
{
    vector<int>v1 = v;
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=0;j<n;j++)
        {
            if(v[(i + j) % n] != v1[j])
            {
                flag = false;
                break;
            }
        }
        if(flag) return true;;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        } 
       if(ans(n,v)) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}