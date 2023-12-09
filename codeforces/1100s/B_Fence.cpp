// https://codeforces.com/problemset/problem/363/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;

    int input;
    vector<int> a;
    while (cin >> input)
        a.push_back(input);

    // Precompute first idx
    int *dp = new int[n - k + 1];
    for (int i = 0; i < k; i++)
        dp[0] += a[i];

    int minVal = dp[0];
    int startIdx = 0;
    // Update with new iteration
    for (int i = 1; i < n - k + 1; i++)
    {
        dp[i] = dp[i - 1] - a[i - 1] + a[i + k - 1];

        if (dp[i] < minVal)
        {
            minVal = dp[i];
            startIdx = i;
        }
    }

    cout << startIdx + 1;
}