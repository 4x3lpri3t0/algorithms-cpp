// https://codeforces.com/problemset/problem/474/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n;

    // Calculate prefix sums
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    cin >> m;
    int q, lo, hi, mid;
    while (m--)
    {
        cin >> q;
        lo = 0;
        hi = n;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (a[mid] < q)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        cout << lo << endl;
    }
}

// !
// binary search
// TC: O(m * log n)
// SC: O(n)