#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ul unsigned long long
int main(){
    faster
int t,n,i,a,b;
cin>>t;
while(t--){
    cin>>n;
    cin>>a;
    for(i=2;i<=n;i++){cin>>b; a=a & b;}
    cout<<a<<endl;
}
return 0;
}