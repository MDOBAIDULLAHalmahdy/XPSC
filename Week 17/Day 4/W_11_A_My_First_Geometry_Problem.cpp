#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void solve() {
    string s;
    cin >> s;
    int leftRight = 1;
    int upDown = 1;
    
    for(int i = 0; i < 4; i++){
        if(s[i] == '1' && i < 2){
            //left/right is allowed
            leftRight += 10;
        }
        if(s[i] == '1'&& i >= 2){
            //up/down is allowed
            upDown += 10;
        }
    }
    cout<< leftRight * upDown << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    for (int i=0; i<tc; i++) {
        solve();
    }
}