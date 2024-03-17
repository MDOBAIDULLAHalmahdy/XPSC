#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a;
    
    bool arr[26]={false};    
    for(char c:s)
    {         
        a=c-97;
        arr[a]=true;
    }
    

    int ct=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]==false)
        {
            char z;
            z=i+97;
            cout<<z;
            break;
        }
        else
            ct++;
    }
    if(ct==26) cout<<"None";

    return 0;
}