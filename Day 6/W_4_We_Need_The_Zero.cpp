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
        vector<int> v(n);
        int x = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x ^= v[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans ^= (v[i] ^ x);
        } 
        if(ans == 0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
} 