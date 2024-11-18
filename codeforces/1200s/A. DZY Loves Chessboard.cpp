// https://codeforces.com/problemset/problem/445/A
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n, m;
vector<string> res;

// https://en.wikipedia.org/wiki/Flood_fill
void floodFill(int i, int j, char prev = 'W')
{
    if (res[i][j] != '.')
        return; // '-' or alreay filled with W/B

    if (prev == 'W')
        res[i][j] = 'B';
    else
        res[i][j] = 'W';

    if (i > 0) // Left
        floodFill(i - 1, j, res[i][j]);
    if (j > 0) // Top
        floodFill(i, j - 1, res[i][j]);
    if (i < n - 1) // Bottom
        floodFill(i + 1, j, res[i][j]);
    if (j < m - 1) // Right
        floodFill(i, j + 1, res[i][j]);
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Input
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        res.push_back(str);
    }

    // Solution
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (res[i][j] == '.')
                floodFill(i, j);
        }
    }

    // Output
    for (int i = 0; i < n; i++)
        cout << res[i] << endl;
}

// dfs
// floodfill