#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
 
        int n;
        cin>>n;
 
        string ss;
        cin>>ss;
 
        int ans = 1e9;
 
        for (char i='a';i<='z';i++)
        {
 
            int cnt = 0;
            int l = 0, r = n - 1;
 
            while (l <= r)
            {
 
                if (ss[l] != ss[r])
                {
                    if (ss[l] == i)
                    {
                        l++;
                        cnt++;
                    }
 
                    else if (ss[r] == i)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, cnt);
        }
 
        if(ans == 1e9)
        {
            cout<<"-1"<< endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}