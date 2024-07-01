#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
	    cin>>s;
	    string ans;
	    int B=0,b=0;
	    for(int i=s.size()-1;i>=0;i--)
	    {
		    if(s[i] == 'b')
		    {
			    b++;
		    }
		    else if(s[i] == 'B')
		    {
			    B++;
		    }
		    else if(s[i] >= 'a' && s[i] <= 'z')
		    {
			    if(b)
			    {
				    b--;
                    continue;
			    }
			    else
			    {
				    ans += s[i];
			    }
		    }
		    else
		    {
			    if(B)
			    {
				    B--;
                    continue;
			    }
			    else
			    {
				    ans += s[i];
			    }
		    }
	    } 
	    reverse(ans.begin(),ans.end());
	    cout<<ans<<endl;
    }
    return 0;
}