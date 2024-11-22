// https://codeforces.com/problemset/problem/287/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

const int n = 4;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Init matrix
    char m[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    bool possible = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int a = 0;
            for (int k = 0; k < 2; k++)
                for (int l = 0; l < 2; l++)
                    if (m[i + k][j + l] == '.')
                        a++;

            if (a != 2)
            {
                possible = true;
                break;
            }
        }
    }


    cout << (possible ? "YES" : "NO");
}

// 