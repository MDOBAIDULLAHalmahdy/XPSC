#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<long long int > a(n);
    vector<vector<long long>> dis(2, vector<long long int>(n));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }    

    for (int i = 0; i < 2; i++) 
    {
        int v = 0;
        for (int j = 0; j < n; j++) 
        {
            dis[i][j] = dis[i][v] + max(a[j], a[v]) * (j - v);
            if (a[j] <= a[v])
                v = j;
        }
        reverse(a.begin(), a.end());
    }

    
    long long int ans = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        ans = min(ans, dis[0][i] + dis[1][n - 1 - i]);
    }

    cout << ans << '\n';
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}