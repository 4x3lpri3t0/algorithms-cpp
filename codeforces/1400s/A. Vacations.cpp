// https://codeforces.com/problemset/problem/698/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dp[n];
    dp[0] = a[0] == 0 ? 1 : 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0) // No choice
        {
            dp[i] = dp[i - 1] + 1;
        }
        else if (a[i] != 3 && a[i] == a[i - 1]) // 1,1 or 2,2 (also no choice)
        {
            dp[i] = dp[i - 1] + 1;
            a[i] = 0;
        }
        else if (a[i] == 3)
            if (a[i - 1] == 1)
            {
                a[i] = 2;
                dp[i] = dp[i - 1];
            }
            else if (a[i - 1] == 2)
            {
                a[i] = 1;
                dp[i] = dp[i - 1];
            }
            else // Previous is still 3 or was 0
            {
                dp[i] = dp[i - 1];
            }
        else // 1, 2 or 2, 1
            dp[i] = dp[i - 1];
    }

    cout << dp[n - 1];
}

// TODO