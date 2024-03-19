#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long int arr[a],brr[b];
    for(int i=0;i<a;i++)
        cin>>arr[i];
    for(int i=0;i<b;i++)
        cin>>brr[i];

    int l=0,r=0,sum=0;
    while(r<b)
    {
        while(brr[r]>arr[l] && l<a)
        {
            sum++;
            l++;
        }
        r++;
        cout<<sum<<" ";
        
    }
    return 0;
}
