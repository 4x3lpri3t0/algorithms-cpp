// https://codeforces.com/problemset/problem/334/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n][n];
    int i = 0, row = 0, col = 0, round = 0;
    while (i < n * n)
    {
        a[row][col] = i + 1;

        i++;

        if (i % n == 0)
            col++;
        else
            row = (row + 1) % n;
    }

    // Out
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }
}

// Alt: https://codeforces.com/contest/334/submission/4927701