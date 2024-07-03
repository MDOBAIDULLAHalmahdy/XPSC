#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool flag = true;
        for (int i= 1;i<=n;i++)
        {
            int x;
            cin>>x;
            bool found = false;
            for (int j=i + 1;j>=2;j--)
            {
                if (x % j)
                {
                    found = true;
                    break;
                }
            }
            flag = flag && found;
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}