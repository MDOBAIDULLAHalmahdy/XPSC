#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        ll a = 0;
        ll b = 0;
     
        for(ll i=0;i<n;i++)
        {
            int x; 
            cin>>x;
            if(x == 1) a += 2;
            else a++;
            b += x;
        }
     
        if (n == 1) 
        {
            cout<<"NO"<<endl;
            continue;
        }
        if (a <= b) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
