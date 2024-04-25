#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>v;
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=n-1;i>=0;i--)
    {
        string ss=v[i];
        if(mp[ss]==0)
        {
            //cout<<ss<<" ";
            mp[ss]++;
            int x=ss.size();
            //cout<<x<<" ";
            cout<<ss[x-2]<<ss[x-1];
        }
    }

    
    return 0;
}
 