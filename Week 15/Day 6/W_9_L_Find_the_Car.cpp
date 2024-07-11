#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(k + 1), b(k + 1);
    for (ll i = 1;i <= k;i++) {
        cin >> a[i];
    }
    for (ll i = 1;i <= k;i++) {
        cin >> b[i];
    }

    vector<ll> queries(q);
    for (ll i = 0;i < q;i++) {
        cin >> queries[i];
    }

    for (ll i = 0;i < q;i++) {
        ll val = queries[i], idx, ans;
        auto UB = upper_bound(a.begin(), a.end(), queries[i]);
        idx = UB - a.begin();
        idx--;
        if (a[idx] == val) {
            ans = b[idx];
        }
        else {
            ans = (((b[idx + 1] - b[idx]) * (val - a[idx])) / (a[idx + 1] - a[idx])) + b[idx];
        }
        cout << ans << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    cin >> t;

    for (ll cs = 1; cs <= t; cs++) {
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}