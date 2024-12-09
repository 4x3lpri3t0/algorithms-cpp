// https://codeforces.com/problemset/problem/365/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    int globalMax = 2, localMax = 2;
    for (int i = 2; i < n; i++)
    {
        if (a[i - 1] + a[i - 2] == a[i])
        {
            localMax++;
            globalMax = max(globalMax, localMax);
        }
        else
        {
            localMax = 2;
        }
    }

    cout << globalMax;
}