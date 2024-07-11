#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>cnt(n+6);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        int ans = 0;
        bool once = false;
        for(int i=0;i<n+6;i++)
        {
            if(cnt[i] == 0)
            {
                ans = i;
                break;
            }
            if(cnt[i] == 1)
            {
                if(once)
                {
                    ans = i;
                    break;
                }
                once = true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}