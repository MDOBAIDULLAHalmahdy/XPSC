#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s[a];
        for(int i=0;i<a;i++)    cin>>s[i];
        vector<int>v;
        for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                string s1=s[i];
                string s2=s[j];
                int sum=0; 
                for(int i=0;i<b;i++)
                    sum+=abs(s1[i]-s2[i]);
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;
}
