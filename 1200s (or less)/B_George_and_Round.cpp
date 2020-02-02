#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/problemset/problem/387/B
int32_t main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int b[m];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int minIdxA = 0;
    for (int i = 0; i < m && minIdxA < n; i++)
    {
        if (b[i] >= a[minIdxA])
        {
            minIdxA++;
        }
    }

    cout << n - minIdxA;
}