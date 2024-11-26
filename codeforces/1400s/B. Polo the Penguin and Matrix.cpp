// https://codeforces.com/problemset/problem/289/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, d;
    cin >> n >> m >> d;

    int k = n * m;
    int a[k]; // Flatten to a 1D array
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i * m + j];

    sort(a, a + k);

    int ops = 0;
    int midVal = a[k / 2];
    for (int i = 0; i < k; i++)
    {
        int diff = abs(a[i] - midVal);
        if (diff % d != 0)
            Error;

        ops += (diff / d); // Equalize to median value
    }

    cout << ops;
}

// sortings