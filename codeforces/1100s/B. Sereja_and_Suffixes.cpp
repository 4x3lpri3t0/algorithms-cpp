// https://codeforces.com/problemset/problem/368/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dp[n];
    unordered_set<int> intSet;
    for (int i = n - 1; i >= 0; i--)
    {
        intSet.insert(a[i]);
        dp[i] = intSet.size();
    }

    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << dp[l - 1] << endl;
    }
}