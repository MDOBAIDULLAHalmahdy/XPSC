#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int ar[4];
    for(int i=0;i<4;i++)
    {         
        int c=a%10;
        a=a/10;
        ar[i]=c;
        
    }
    for(int i=3;i>=0;i--)
        cout<<ar[i];
    return 0;
}
