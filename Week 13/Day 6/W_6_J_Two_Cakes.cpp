#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int x = 0;
    for(int i=1;i<n;i++)
    {
        int r = a/i;
        int s = b/(n-i);
        int mn = min(r,s);
        x = max(x,mn);
    }
    cout<<x<<endl;
    return 0;
}