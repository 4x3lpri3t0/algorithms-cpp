// https://codeforces.com/problemset/problem/222/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Simplify indexing logic
    k--;

    // Only valid scenario: All numbers after k-th are equal to the k-th number
    for (int i = k + 1; i < n; i++)
    {
        if (a[i] != a[k])
        {
            cout << -1;
            return 0;
        }
    }

    // Number of necessary operations is last different number found
    int lastDiffIdx = -1;
    for (int i = 0; i < k; i++)
    {
        if (a[i] != a[k])
            lastDiffIdx = i;
    }

    cout << lastDiffIdx + 1;
}