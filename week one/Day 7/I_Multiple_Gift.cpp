//I - Multiple Gift
//21-03-2024
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int ct=0;
    while(x<=y)
    {
        ct++;
        x=x*2;
    }
    cout<<ct<<endl;
    return 0;
}
