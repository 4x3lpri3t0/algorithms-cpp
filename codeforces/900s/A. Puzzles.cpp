// https://codeforces.com/problemset/problem/337/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);

    int minDiff = 1000;
    for (int i = 0; i <= m - n; i++)
    {
        minDiff = min(minDiff, a[i + (n - 1)] - a[i]);
    }

    cout << minDiff;
}

// greedy