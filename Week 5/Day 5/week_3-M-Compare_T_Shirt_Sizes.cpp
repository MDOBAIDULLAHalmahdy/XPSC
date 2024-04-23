#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        ll i=a.size();
        ll j=b.size();
        auto c=a[i-1];
        auto d=b[j-1];
        if(c==d)
        {
            if(i==j)
            {
                cout<<"="<<endl;
            } 
            else 
            {
                if(c=='S'){
                    if(i>j)
                    {
                        cout<<"<"<<endl
                    } 
                    else
                    {
                        cout<<">"<<endl;
                    } 
                }
                else{
                    if(i>j)
                    {
                        cout<<">"<<endl;
                    } 
                    else
                    {
                        cout<<"<"<<endl;
                    } 
                }
            }             
        }
        else if(c>d)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<">"<<endl;
        }
    }
    
    return 0;
}
 