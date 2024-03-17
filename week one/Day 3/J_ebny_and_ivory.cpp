#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c; 
    for(int i=0;i<=c/b;i++)
    {
        int sort=i*b;
        int remender=c-sort;
        if(remender % a ==0)
        {
            cout<<"Yes";
            return 0;
        }
    }   
    cout<<"No";
    return 0;
}
