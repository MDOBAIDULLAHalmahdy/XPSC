#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l = s.length();
        bool flag = false;
        if(l % 2 == 0 && l > 2)
        {
            for(int i=1;i<l/2;i++)
            {
                if(s[i] != s[i-1])
                {
                    flag = true;
                    break;
                }
            }
        }
        else if(l % 2 == 1 && l > 3)
        {
            for(int i=1;i<l/2;i++)
            {
                if(s[i] != s[i-1])
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}