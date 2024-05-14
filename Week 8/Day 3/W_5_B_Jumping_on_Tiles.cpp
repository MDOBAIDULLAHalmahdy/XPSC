#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,cost,sz1,i,jump;
    string s1;
    char f,l;
  cin>>t;
  vector<pair<char,int>>v1;
  while(t--){
    cin>>s1;
    sz1=s1.size();
cost=abs(s1[sz1-1]-s1[0]);
cout<<cost<<' ';
f=s1[0];
l=s1[sz1-1];
if(f<l){
  for(i=1;i<sz1-1;i++){
    if(s1[i]>=f&&s1[i]<=l) {
      v1.push_back({s1[i],i+1});}
  }
}
else{
   for(i=1;i<sz1-1;i++){
    if(s1[i]<=f&&s1[i]>=l) {
      v1.push_back({s1[i],i+1});}
  }
}
jump=v1.size()+2;
cout<<jump<<endl<<1<<' ';
if(f<l) sort(v1.begin(),v1.end());
else sort(v1.rbegin(),v1.rend());
for(auto i:v1) cout<<i.second<<' ';
cout<<sz1<<endl;
v1.clear();
  }
    return 0;}