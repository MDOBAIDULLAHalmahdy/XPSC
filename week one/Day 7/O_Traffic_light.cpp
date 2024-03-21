#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s+=s;
        int counter=0;
        int answer=0;
        if(c=='g')
        {
            counter=0;
            cout<<counter<<endl;
            continue;
        }
        for(int i=0;i<2*n;i++)
        { 
             
            if(s[i]==c)
            {
                counter=0; 
                while(s[i]!='g' && i<2*n)
                {
                    counter++;
                    i++;
                }
                answer=max(counter,answer);
            
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}
