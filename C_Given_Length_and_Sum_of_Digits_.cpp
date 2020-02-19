// https://codeforces.com/problemset/problem/489/C
#include <bits/stdc++.h>
using namespace std;

int m, s;

int main()
{
    ios::sync_with_stdio(0);
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

    string s1, s2;
    int m1 = 9 * m - s, m2 = s;
    for (int i = 0; i < m; i++)
    {
        int t = min(9 - (i == 0), m1);
        s1 += '9' - t;
        m1 -= t;
        int u = min(9, m2);
        s2 += '0' + u;
        m2 -= u;
    }
    cout << s1 << ' ' << s2 << endl;
}