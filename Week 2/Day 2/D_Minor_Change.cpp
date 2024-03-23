#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int a=s.size();
    int ct=0;
    for(int i=0;i<a;i++)
    {
        if(s[i] != t[i] )
            ct++;
    }
    cout<<ct;
    return 0;
}
