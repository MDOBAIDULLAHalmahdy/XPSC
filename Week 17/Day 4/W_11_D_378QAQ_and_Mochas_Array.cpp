#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
         ll n; cin >> n;
         ll a[n];for(int i   = 0 ;i<n;i++)cin >> a[i];
         sort(a , a+n);
         ll fi  = a[0];ll se = 1e9+1;
         bool f = 1;
         for(int i = 0;i<n;i++)
         {
            if(a[i]%fi == 0)continue;
            else { se = a[i];break;}
         }
         for(int i = 0;i<n;i++)
         {
            if(a[i]%fi == 0 || a[i]%se == 0)continue;
            else f  = 0 ;
         }
         if(f)cout << "Yes\n";
         else cout << "No\n";
    }
}