// https://codeforces.com/problemset/problem/387/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int b[m];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int idxA = 0;
    int idxB = 0;
    for (; idxB < m && idxA < n; idxB++)
    {
        if (b[idxB] >= a[idxA])
            idxA++;
    }

    cout << n - idxA;
}

// greedy
// two pointers