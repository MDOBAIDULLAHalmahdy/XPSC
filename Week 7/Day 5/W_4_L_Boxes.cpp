#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int log2(ll num)
{
    int log = 0;
    ll div = 2;
    
    while(num/div != 0)
    {
        div*= 2;
        log++;
    }
    
    return log+1;
    
}

ll solve()
{
    int n;
    cin>>n;
    ll max_num = 0;
    vector<ll> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        max_num = max(v[i],max_num);
    }
    
    int max_msb = log2(max_num);
    
    ll countr = 0;
    
    for(int i =0; i < n;i++)
    {
        if(log2(v[i]) == max_msb)
        {
            countr++;
        }
    }
    
    countr = (countr + 1)/2;
    
    return countr;
    
}

int main() {
    std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	    cout<<solve()<<"\n";
	}
	return 0;
}