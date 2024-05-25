#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int m = (n * (n - 1)) / 2;
        vector<int>v(m);
        for (int i=0;i<m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int c = 0;
        for (int i=0;i<m;i=i + (n - c))
        {
            cout<<v[i]<<" ";
            c++;
        }
        cout<<1000000000<<endl;
    }
    return 0;
}