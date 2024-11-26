// https://codeforces.com/problemset/problem/315/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n], b[n];
    map<int, int> openables;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] != b[i])
        {
            openables[b[i]] = 1;
        }
        else // a[i] == b[i]
        {
            if (!openables.contains(b[i]))
                openables[b[i]] = 0; // e.g. 4 4 (first appearance, can't open itself)
            else
                openables[b[i]] = 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!openables.contains(a[i]))
            ans++;
        else if (openables[a[i]] == 0 && a[i] == b[i])
            // can't open itself, but could open other bottle of same type (e.g. 1 1, 1 2)
            ans++;
    }

    cout << ans;
}

// tricky
// !

// There's a simpler brute force solution that is O(n^2), but since sample size for 
// this problem is n <= 100, it's also fine: https://codeforces.com/contest/315/submission/4214821