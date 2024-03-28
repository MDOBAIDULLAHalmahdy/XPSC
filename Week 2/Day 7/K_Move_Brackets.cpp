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
        int ct=0;
        vector<char>v;
        for(auto c:s)
        {
            if(c=='(')  v.push_back(c);
            else if(c==')' && v.size() !=0) v.pop_back();
            else if(c==')'&& v.size()==0) ct++; 
        }
        cout<<ct<<endl;
        
    }
    
    return 0;
}
