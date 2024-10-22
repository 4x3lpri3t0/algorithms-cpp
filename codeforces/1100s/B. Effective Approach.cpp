// https://codeforces.com/problemset/problem/227/B
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

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    map<int, int> firstNumberIdx;
    map<int, int> lastNumberIdx;
    for (int i = 0; i < n; i++)
    {
        if (!firstNumberIdx.count(a[i]))
        {
            firstNumberIdx[a[i]] = i + 1;
        }

        lastNumberIdx[a[i]] = (n - i);
    }

    int totalComp1 = 0, totalComp2 = 0;
    for (int i = 0; i < m; i++)
    {
        totalComp1 += firstNumberIdx[b[i]];
        totalComp2 += lastNumberIdx[b[i]];
    }

    cout << totalComp1 << " " << totalComp2;
}