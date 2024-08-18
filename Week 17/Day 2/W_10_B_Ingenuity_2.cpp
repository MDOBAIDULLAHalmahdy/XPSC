#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, char> inv = {{'N', 'S'}, {'S', 'N'}, {'E', 'W'}, {'W', 'E'}};

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;

    for (char c : s) {
        if (c == 'N') y++;
        if (c == 'S') y--;
        if (c == 'E') x++;
        if (c == 'W') x--;
    }

    if (x % 2 != 0 || y % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    vector<char> ans(n, 'R');
    if (x == 0 && y == 0) {
        if (n == 2) {
            cout << "NO" << endl;
            return;
        }
        ans[0] = 'H';
        for (int i = 1; i < n; ++i) {
            if (s[i] == inv[s[0]]) {
                ans[i] = 'H';
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'N' && y > 0) {
                y -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'S' && y < 0) {
                y += 2;
                ans[i] = 'H';
            } else if (s[i] == 'E' && x > 0) {
                x -= 2;
                ans[i] = 'H';
            } else if (s[i] == 'W' && x < 0) {
                x += 2;
                ans[i] = 'H';
            }
        }
    }

    for (char c : ans) {
        cout << c;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
