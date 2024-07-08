#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define PI 2.0 * acos(0.0)
#define Dpos(n) fixed << setprecision(n)

typedef long long ll;
typedef vector<ll> vl;
const ll N = 1e5 + 1;
const ll MOD = 998244353;

void solve()
{
    ll n, m = 0, i;
    cin >> n;
    vl v1(n), v2;
    for (i = 0; i < n; i++)
    {
        cin >> v1[i];
        m = max(m, v1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (v1[i] != m)
            v2.push_back(m - v1[i]);
    }
    m = v2[0];
    n = v2.size();
    for (i = 1; i < n; i++)
        m = gcd(m, v2[i]);
    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        ans += (v2[i] / m);
    }
    cout << ans << ' ' << m;
}
int main()
{
    op() int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
}