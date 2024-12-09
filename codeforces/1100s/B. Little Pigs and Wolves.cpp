// https://codeforces.com/problemset/problem/116/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int c = 0;
            if (a[i][j] == 'W')
            {
                if (j > 0 && a[i][j - 1] == 'P')
                    c++;
                if (j < m - 1 && a[i][j + 1] == 'P')
                    c++;
                if (i > 0 && a[i - 1][j] == 'P')
                    c++;
                if (i < n - 1 && a[i + 1][j] == 'P')
                    c++;
            }
            if (c > 0)
                ans++;
        }
    }

    cout << ans;
}

// greedy