#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll q,x;
        ll first = -1,last = -1;
        bool flag = false;
        cin>>q;
        while(q--) 
        {
            cin>>x;
            if(flag) 
            {
                if(x >= last and x <= first) 
                {
                    last = x;
                    cout<<1;
                }
                else 
                {
                    cout<<0;
                }
            }
            else 
            {
                if(first == -1) 
                {
                    first = x;
                    last = x;
                    cout<<1;
                }
                else if(x >= last) 
                {
                    last = x;
                    cout<<1;
                }
                else if(first >= x) 
                {
                    last = x;
                    flag = true;
                    cout<<1;
                }
                else 
                {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}