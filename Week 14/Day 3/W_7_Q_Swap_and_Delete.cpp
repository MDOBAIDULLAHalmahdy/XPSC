#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt0 = 0,cnt1=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='0')
            {
                if(cnt1 > 0)
                {
                    cnt1--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(cnt0 > 0)
                {
                    cnt0--;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<cnt1 + cnt0<<endl;
    }
    return 0;
}