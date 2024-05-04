#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define hello() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define mod 1000000007
#define cntbit __builtin_popcount
const int mx=1e5+123;
ll digit_sum(ll n){
  ll sum=0;
   while(n){
    sum+=n%10;
    n/=10;
   }
   return sum;
}
const int N=10000;
int main()
{
     hello();
     int tc;
     cin>>tc;
     while(tc--){
        vector<ll>a;
        vector<ll>b;
        string s,p;
        ll n,m,f=0,e=0,o=0;
        cin>>n>>m;
        cout<<(n^m)<<nl;
 
    }
}
 
 