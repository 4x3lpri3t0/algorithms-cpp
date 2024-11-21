// https://codeforces.com/problemset/problem/242/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int l[n], r[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        mn = min(mn, l[i]);
        mx = max(mx, r[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (l[i] == mn && r[i] == mx)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;
    return 0;
}