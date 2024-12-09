// https://codeforces.com/problemset/problem/489/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, s;
    cin >> m >> s;

    // Smallest
    if (s == 0 && m == 1)
    {
        cout << "0 0";
        return 0;
    }

    if (s == 0 || s > 9 * m)
    {
        cout << "-1 -1";
        return 0;
    }

    string res1, res2;
    int m1 = 9 * m - s, m2 = s;
    for (int i = 0; i < m; i++)
    {
        int d1 = min(9 - (i == 0), m1);
        res1 += '9' - d1;
        m1 -= d1;

        int d2 = min(9, m2);
        res2 += '0' + d2;
        m2 -= d2;
    }

    cout << res1 << ' ' << res2 << endl;
}

// dp
// greedy