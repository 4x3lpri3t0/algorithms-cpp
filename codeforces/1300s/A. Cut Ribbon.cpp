// https://codeforces.com/problemset/problem/189/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int dp[n + 1];
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i >= a && dp[i - a] != -1)
        {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i - b] != -1)
        {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i - c] != -1)
        {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n];
}

// dp