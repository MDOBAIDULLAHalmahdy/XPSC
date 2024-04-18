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
        int n;
        cin>>n;
        int a[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++)
                cin>>a[i][j];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[a[i][0]]++;

        int p,q;
        for(auto x:mp)
        {
            if(x.second == 1) p=x.first;
            else q=x.first;             
        }
        cout<<q<<" ";
        int y;
        for(int i=0;i<n;i++){
            if(a[i][0]==p)
                y=i;
        }
        for(int i=0;i<n-1;i++)
            cout<<a[y][i]<<" ";




        cout<<endl;         


    }
     

    return 0;
}
 