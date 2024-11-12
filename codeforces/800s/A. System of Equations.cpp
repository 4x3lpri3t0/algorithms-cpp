// https://codeforces.com/problemset/problem/214/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int ans = 0;
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = 0; b * b <= m; b++)
        {
            if (a * a + b == n && a + b * b == m)
                ans++;
        }
    }

    cout << ans;
}