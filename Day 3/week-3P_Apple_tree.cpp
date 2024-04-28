#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6+10;
vector<int>g[N];
int ch[N];
int n,m,l,r;
 
void dfs(int ver , int par){
    if (g[ver].size()==1 && ver!=1) ch[ver] = 1;
    for (auto chil:g[ver]){
        if (chil!=par) 
        {
            dfs(chil,ver); 
            ch[ver] += ch[chil];
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin >>t;
    while (t--){
        cin >>n;
        for (int i=1; i<=n; i++)
        {
            g[i].clear();
            ch[i] = 0;
        }
        for (int i=0; i<n-1; i++){
            cin>>l>>r;
            g[l].push_back(r);
            g[r].push_back(l);
        }
        dfs(1,0);
        cin >>m;
        while (m--){
            cin >>l>>r;
            cout<<ch[l]*ch[r]<<endl;
        }
    }
}