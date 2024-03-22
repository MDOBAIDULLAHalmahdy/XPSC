#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int k,s;
    cin>>k>>s;
    int ct=0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            int z=s-i-j;
            if(z>=0 && z<=k)
                ct++;
            
        }
    }
    cout<<ct;
   
    return 0;
}
