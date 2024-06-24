#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
       cin>>b[i];
    }
    int m;
    cin >> m;
    vector<int>g(m);
    for(int i=0;i<m;i++)
    {
        cin>>g[i];
    }
 
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
 
    int pairs = 0;
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i] == g[j] || b[i]+1 == g[j] || b[i] == g[j]+1)
            {
                pairs++;
                g[j] = -1;
                break;
            }
        }
    }
 
    cout<<pairs<<endl;
    return 0;
}