#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n; 
    cin>>n;
    for(int i=0;i<n/4;i++) 
    {
        cout<<"aabb";
    }

    if (n % 4 == 1)
    {
        cout<< "a";
    }

    else if(n % 4 == 2)
    {
        cout<<"aa";
    }

    else if(n % 4 == 3) 
    {
        cout<<"aab";
    } 
    
    return 0;
}