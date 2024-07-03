#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    map<int,int>cnt;
 
    while (n--)
    {
        int x;
        cin>>x;
        for(int i=2;i*i<=x;i++)
        {
            if (x % i == 0)
            {
                cnt[i]++;
                while(x % i == 0)
                {
                    x /= i;
                }
            }
        }
        if (x > 1) cnt[x]++;
    }
    int ans = 1;
    for (auto it : cnt)
    {
        ans = max(ans,it.second);
    }
    cout<<ans<<endl;
    return 0;
}