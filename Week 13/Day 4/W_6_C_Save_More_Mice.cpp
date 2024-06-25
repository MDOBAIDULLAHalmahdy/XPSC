#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll cat=0,cnt=0;
        for(int i=0;i<k;i++)
        {
            if(v[i] > cat)
            {
                cat += n-v[i];
                cnt++;
            }
            else 
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}