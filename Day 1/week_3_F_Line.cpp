#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                v[i]=i;
                sum+=i;
            }  
            else{
                v[i]=n-1-i;
                sum+=n-1-i;
            }  
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            int l=v[i];
            int p=n-1-l;
            if(p>l) sum+=p-l;                 
            cout<<sum<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
 