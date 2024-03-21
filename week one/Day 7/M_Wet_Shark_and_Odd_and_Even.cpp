#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int sum=0; 
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 !=0)
        {
            sum-=a[i];
            cout<<sum<<endl;
            break;
        }
    }    
    return 0;
}
