// https://codeforces.com/problemset/problem/445/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

/*
Very simple optimization:
If (i + j) % 2 == 0, color the cell W.
Otherwise, color the cell B.
*/
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> res[i];
        for (int j = 0; j < m; j++)
        {
            if (res[i][j] == '.')
                res[i][j] = (i + j) % 2 == 0 ? 'B' : 'W';
        }
    }

    for (const string& row : res)
        cout << row << '\n';
}