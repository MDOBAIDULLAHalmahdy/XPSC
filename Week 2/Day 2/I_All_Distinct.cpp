#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int>l;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            l.push_back(p);
        }
        l.sort();
        l.unique();
        int s=l.size();
        if(n%2==0)
        {
            if(s%2==0) cout<<s<<endl;
            else cout<<s-1<<endl;
        }
        else
        {
            if(s%2 !=0) cout<<s<<endl;
            else cout<<s-1<<endl; 
        }
    }
    return 0;
}
