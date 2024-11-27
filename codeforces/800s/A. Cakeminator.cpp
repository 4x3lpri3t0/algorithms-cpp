// https://codeforces.com/problemset/problem/330/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int r[11], c[11]; // More practical than using 'set' since r,c <= 10
    memset(r, 1, sizeof(r));
    memset(c, 1, sizeof(c));

    for (int i = 0; i < n; i++)
    {
        char s[20];
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'S')
                r[i] = c[j] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (r[i] || c[j])
                ans++;

    cout << ans;
}