// https://codeforces.com/contest/2025/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;
    while (TC--)
    {
        string s, t;
        cin >> s >> t;

        int commonCount = 0;
        int n = s.length();
        int m = t.length();
        for (int i = 0; i < min(n, m); i++)
        {
            if (s[i] != t[i])
                break;
            commonCount++;
        }

        if (commonCount > 0)
            commonCount--; // Fixed cost to copy is 1, so we only copy if there's at least 1 common char

        cout << n + m - commonCount << endl;
    }
}