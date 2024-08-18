#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int fcnt = 0, lcnt = 0, fin;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                fcnt++;
            }
            if (fcnt == k)
            {
                fin = i;
                break;
            }
        }
        for (int i = fin + 1; i < n; i++)
        {
            if (a[i] == a[n - 1])
                lcnt++;
            if (lcnt == k)
                break;
        }
        if (fcnt == k && lcnt == k || (fcnt == k && a[0] == a[n - 1]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}