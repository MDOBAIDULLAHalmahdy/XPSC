#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r = 1;
        while(r * 2 <= n-1)
        {
            r *= 2;
        }
        for(int i=n-1;i>=r;i--)
        {
            cout<<i<<" ";
        }
        for(int i=0;i<r;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}