#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
    
int t;
cin>>t;
while(t--){
    int a,b,k;
    cin>>a>>b>>k;
       int count =0;
       while(!false){
           
           if(b/k>=a && b%k==0){
               b=b/k; count++;
           }
           else if(b%k==0){
               count+=b-a;
               break;
               
           }
           else{
               count+=b%k;
               b-=(b%k);
           }
       }
       cout<<count<<endl;
   
}

}