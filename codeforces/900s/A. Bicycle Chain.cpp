// https://codeforces.com/problemset/problem/215/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Input
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // Solution
    int maxRatio = 0;
    int maxRatioCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] != 0)
                continue;

            int ratio = b[j] / a[i];

            if (ratio > maxRatio)
            {
                maxRatio = ratio;
                maxRatioCount = 1;
            }
            else if (ratio == maxRatio)
            {
                maxRatioCount++;
            }
        }
    }

    // Output
    cout << maxRatioCount;
}