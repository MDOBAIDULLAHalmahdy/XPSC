#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll a,b,l;
        cin>>a>>b>>l;
        ll x=0;
        set<ll>s;
        
        for(int i=0;;i++)
        {
            if((pow(a,i))>l) break;
            if(l%int(pow(a,i))!=0) break;
            x=l/int(pow(a,i));
            s.insert(x);
            while(x%b==0)
            {
                x=x/b;
                s.insert(x);
            }

        }
        
        cout<<s.size()<<ss;
    }
    return 0;
}
