#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        set<int>st;
        st.insert(x);
        while(m--)
        {
           int a; 
           char b;
           cin>>a>>b;
        
           set<int>tmp;
           for(auto &i : st)
           {
                if(b!='1')
                {
                    int q = i+a;
                    if(q > n) q -= n;
                    tmp.insert(q);
                }
                if(b != '0')
                {
                    int q = i-a;
                    if(q<=0) q+=n;
                    tmp.insert(q);
                }
            }

            st.clear();
            for(auto &i : tmp)
            {
                st.insert(i);
            }
        }

        cout<<st.size()<<endl;
        for(auto &i : st)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }
    return 0;
}