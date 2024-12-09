// https://codeforces.com/problemset/problem/34/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
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

    int minDistance = abs(a[0] - a[n - 1]);
    int idx1 = 1;
    int idx2 = n;
    for (int i = 0; i < n - 1; i++)
    {
        int distance = abs(a[i] - a[i + 1]);
        if (distance < minDistance)
        {
            minDistance = distance;
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }

    cout << idx1 << " " << idx2;
}