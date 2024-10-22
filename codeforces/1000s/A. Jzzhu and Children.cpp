// https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cur = 0, last = -1, remChilds = n;
    while (remChilds > 0)
    {
        if (a[cur] > 0)
        {
            a[cur] -= m;
            if (a[cur] <= 0)
            {
                remChilds--;
                last = cur;
            }
        }

        cur++;
        cur %= n;
    }

    cout << last + 1;
}