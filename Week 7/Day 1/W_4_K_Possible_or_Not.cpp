#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,b;
	    cin >> n >> b;
	    int ans = -1;
	    for(int i = 0; i < n ;i++)
	    {
	        int x;
	        cin >> x;
	        if((x & b) == b)
	        {
	            ans &= x;
	        }
	    }
	    
	    if(ans == b)
	    {
	        cout << "Yes" << endl;
	    }else{
	        cout <<"No" << endl;
	    }
	}
	return 0;
}