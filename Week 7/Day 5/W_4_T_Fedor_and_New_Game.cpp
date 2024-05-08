#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>>all_mask;
    for(int mask = 0;mask <= m; mask++)
    {
        vector<int> v1;
        for(int k=0;k<n;k++)
        {
            if((v[mask] >> k) & 1)
            {
                v1.push_back(1);
            }
            else 
            {
                v1.push_back(0);
            }
        }
        all_mask.push_back(v1);
    }
    int ans = 0;
    vector<int>fedor_mask = all_mask[m];
    for(int i=0;i<all_mask.size()-1;i++)
    {
        vector<int> v2 = all_mask[i];
        int cnt = 0;
        for(int k=0;k<n;k++)
        {
            if(fedor_mask[k] != v2[k])
            {
                cnt++;
            }
        }
        if(cnt <= k)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}