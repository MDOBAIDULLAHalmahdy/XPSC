#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bool flag = false;
    for(int c=0;c<(1 << n);c++)
    {
        int sum = 0;
        for(int b=0;b<n;b++)
        {
            if(c & (1 << b)) 
            {
                sum += v[b]; // clockwise
            }
            else
            {
                sum -= v[b]; // anti-clockwise
            }
        }
        if(sum % 360 == 0)
        {
            flag = true;
            break;
        } 
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
