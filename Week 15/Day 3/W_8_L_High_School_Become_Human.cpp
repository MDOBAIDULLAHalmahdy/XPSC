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
    
    ll x,y;
    cin>>x>>y;
    if(x < 10 && y < 10)
    {
        ll ans = pow(x,y);
        ll ans1 = pow(y,x);
        if(ans > ans1) cout<<">"<<endl;
        else if(ans < ans1) cout<<"<"<<endl;
        else cout<<"="<<endl;
        return 0;
    }
    if(x == 1) 
    {
        cout<<"<"<<endl;
        return 0;
    }
    if(y == 1)
    {
        cout<<">"<<endl;
        return 0;
    }
    if(x == y)
    {
        cout<<"="<<endl;
    }
    else if(x > y) 
    {
        cout<<"<"<<endl;
    }
    else cout<<">"<<endl;
    return 0;
}