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

    int n, m, x;
    cin >> n;

    // Calculate prefix sums
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = x + a[i - 1];
    }

    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;

        // Find first position where accum[i] >= q
        auto it = lower_bound(a.begin(), a.end(), q);

        // Convert iterator to index
        cout << it - a.begin() << endl;
    }
}

// !
// lower_bound (alt) -> lower_bound function is implemented as a binary search under the hood
// TC: O(m * log n)
// SC: O(n)