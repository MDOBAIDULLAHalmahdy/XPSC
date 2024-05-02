#include <bits/stdc++.h>
using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define out(ans) cout << ans << '\n'
#define yn(a) (a)? "Yes": "No"

int main() 
{
   int t = 1;
   cin >> t;
   while(t--){
       int ans;
       int n; cin >> n;
       int a[n];
       int totalXor = 0;
       loop(i, n) {
           cin >> a[i];
           totalXor = totalXor^a[i];
       }
       int minXor = totalXor;
       for(int i = 0; i < n; i++)
       {
           int temp = a[i]^totalXor;
           if(minXor > temp) {
               minXor = temp;
           }
       }
       out(minXor);
   }
   return 0;
}