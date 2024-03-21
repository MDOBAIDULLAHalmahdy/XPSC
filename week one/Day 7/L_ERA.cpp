#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ct = 0;
        for(int i=0;i<n;i++)
        {
            int sub = v[i]-(i+1);            
            if(sub > ct)
                ct = sub;
        }
        cout<<ct<<endl;
    }
    return 0;
}