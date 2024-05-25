#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int mx = 0;
        for (int i=0;i<a.size();i++)
            for (int j=0;j<b.size();j++)
            {
                int l = i, r = j, cnt = 0;
                while (l < a.size() && r < b.size())
                {
                    if (a[l] == b[r])
                    {
                        cnt++;
                        l++;
                        r++;
                    }
                    else
                    {
                        break;
                    }
                    mx = max(mx,cnt);
                }
            }
            cout <<(a.size() - mx + b.size() - mx)<<endl;
       }
    return 0;
}