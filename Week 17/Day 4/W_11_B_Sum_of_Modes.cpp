#include <bits/stdc++.h>
#define int long long

using namespace std;

int subArraysWithSumZero(int arr[], int n) {
    unordered_map < int, int > prefixSumCount;
    int sum = 0;
    int cnt = 0;
    sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            cnt++;
        }

        if (prefixSumCount.find(sum) != prefixSumCount.end()) {
            cnt += prefixSumCount[sum];
        }

        prefixSumCount[sum]++;
    }

    return cnt;
}

int32_t main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int res = (n * (n + 1)) / 2;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                arr[i] = 1;
            else
                arr[i] = -1;
        }

        cout << res + subArraysWithSumZero(arr, n) << endl;

    }
}