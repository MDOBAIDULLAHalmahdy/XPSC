#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    long long int s;
    cin>>n>>s;

    vector<int> a(n);
    for (int i = 0;i < n;i++)
        cin >> a[i];
    
    long long int ans=0,sum=0,l=0,r=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
