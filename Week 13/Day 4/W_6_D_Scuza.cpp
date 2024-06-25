#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()

{

     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    ll t,n,i,q,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        ll pre[n+1],arr[n+1],brr[n+1];
        pre[0]=0;
        arr[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            brr[i]=arr[i];
            pre[i]=pre[i-1]+arr[i];
        }
        for(i=1;i<=n;i++)
        {
            arr[i]=max(arr[i],arr[i-1]);
        }
        for(i=1;i<=q;i++)
        {
            ll x;
            cin>>x;
            ll left,right;
            left=1;
            right=n;
            ll re;
            re=0;
            while(left<=right)
            {
                ll mid;
                mid=right-(right-left)/2;
                if(arr[mid]<=x)
                {
                    re=max(re,mid);
                    left=mid+1;
                }
                else
                {
                  right=mid-1;

                }
                //if(left==right)break;
            }
            cout<<pre[re]<<" ";

        }
        cout<<endl;
    }








    return 0;

}
