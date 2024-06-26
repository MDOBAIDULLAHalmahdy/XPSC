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
    ll n, i, num;
    cin >> n;
    vl v1(n + 1);
    for (i = 0; i < n; i++)
    {
        cin >> num;
        v1[num]++;
    }
    ll l = 0, r = v1[1], mid, res = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        ll alice = mid, bob = max(0LL, mid - 1);
        ll c = v1[1] - bob;
        bool f = true;
        for (i = 2; i <= n && f; i++)
        {
            if (c >= alice)
                break;
            if (i > (c + 1))
                f = false;
            else
            {
                c += v1[i];
            }
        }
        if (c >= alice)
        {
            l = mid + 1;
            res = mid;
        }
        else
            r = mid - 1;
    }
    cout << res << endl;
}

int main()
{
    op() int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
}
