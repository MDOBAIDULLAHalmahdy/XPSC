#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<a+b;
    else if( a>b)
        cout<<a+(a-1);
    else
        cout<<b+(b-1);

    return 0;
}
