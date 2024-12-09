// https://codeforces.com/problemset/problem/275/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inMatrix[3][3];
    int outMatrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> inMatrix[i][j];
            outMatrix[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (inMatrix[i][j] % 2 == 0) // Only care if odd
                continue;

            // To flip between 0 and 1: 1 - x
            int cur = outMatrix[i][j];
            outMatrix[i][j] = 1 - cur;

            if (i > 0)
                outMatrix[i - 1][j] = 1 - outMatrix[i - 1][j];
            if (i < 2)
                outMatrix[i + 1][j] = 1 - outMatrix[i + 1][j];
            if (j > 0)
                outMatrix[i][j - 1] = 1 - outMatrix[i][j - 1];
            if (j < 2)
                outMatrix[i][j + 1] = 1 - outMatrix[i][j + 1];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << outMatrix[i][j];
        }
        cout << endl;
    }
}