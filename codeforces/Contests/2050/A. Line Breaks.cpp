// https://codeforces.com/contest/2050/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, n, m;
    cin >> TC;
    while (TC--)
    {
        cin >> n >> m;
        string a[n];
        string word;
        for (size_t i = 0; i < n; i++)
        {
            cin >> word;
            a[i] = word;
        }

        int ans = 0, i = 0;
        while (m > 0 && i < n)
        {
            m -= a[i].size();
            if (m >= 0)
                ans++;
            i++;
        }

        cout << ans << endl;
    }
}