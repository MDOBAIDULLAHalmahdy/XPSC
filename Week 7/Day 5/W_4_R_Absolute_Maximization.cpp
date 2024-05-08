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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int or_s = v[0];
        int and_s = v[0];
        for(int i=1;i<n;i++)
        {
            or_s = or_s | v[i];
            and_s = and_s & v[i];
        }
        int ans = or_s - and_s;
        cout<<ans<<endl;
    }
    return 0;
}