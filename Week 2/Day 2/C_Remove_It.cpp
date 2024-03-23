#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int x;
    cin>>x;
    vector<long long int>a;
    for(int i=0;i<n;i++)
    {
        long long int p;
        cin>>p;
        a.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            continue;
        else
            cout<<a[i]<<" ";
    }

    
    return 0;
}
