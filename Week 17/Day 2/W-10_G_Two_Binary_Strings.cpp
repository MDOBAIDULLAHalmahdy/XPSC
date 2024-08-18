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
    
    int t;
    cin>>t;
    while(t--)
    {
        string a,b; 
        cin>>a>>b;
	    ll n = a.size();
        bool flag = false;
	    for(int i=0;i<n-1;i++)
        {
		    if(a[i] == '0' && a[i+1] == '1')
            {
			    if(b[i] == '0' && b[i+1] == '1')
                {
			    	flag = true;
                    break;
			    }
		    }
	    }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}