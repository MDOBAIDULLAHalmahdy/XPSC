#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;;i++)
    {
        int d=c*i;
        if(d>= a && d<=b)
        {
            cout<<d;
            break;
        }
        if(d>b)
        {
            cout<<-1;
            break;
        }    
    }
      
    return 0;
}
