// https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);

    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    // 0 vs left-most, right-most vs end of strees
    double maxDiff = max(a[0], l - a[n - 1]);
    for (int i = 0; i < n - 1; i++)
        maxDiff = max(maxDiff, (a[i + 1] - a[i]) / 2.0); // between two lanterns

    printf("%lf", maxDiff);
}