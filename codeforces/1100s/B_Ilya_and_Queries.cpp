// https://codeforces.com/problemset/problem/313/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;

    int *dp = new int[s.size() + 1];
    dp[0] = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
    }

    // Get queries (Input) + Output
    while (n--)
    {
        int l, r;
        cin >> l >> r;

        cout << dp[r - 1] - dp[l - 1] << endl;
    }
}