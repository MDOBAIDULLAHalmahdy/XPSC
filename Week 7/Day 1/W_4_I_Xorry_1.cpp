#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long int x,first,two_multiple=1;
        cin>>x;
        while(two_multiple<x){
            two_multiple*=2;
        }
        if(two_multiple==x){
            cout<<0<<" "<<x<<endl;
        }
        else{
            two_multiple/=2;
            cout<<(two_multiple^x)<<" "<<two_multiple<<endl;
        
        }
    }
}
