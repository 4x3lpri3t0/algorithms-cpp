// https://codeforces.com/problemset/problem/431/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Read input (NxN matrix)
    int g[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> g[i][j];

    // Solution
    int tmp, ans = INT_MIN;
    int per[N] = { 0, 1, 2, 3, 4 };
    do {
        tmp = g[per[0]][per[1]] + g[per[1]][per[0]];
        tmp += (g[per[2]][per[3]] + g[per[3]][per[2]]) * 2;
        tmp += g[per[1]][per[2]] + g[per[2]][per[1]];
        tmp += (g[per[3]][per[4]] + g[per[4]][per[3]]) * 2;

        ans = max(ans, tmp);
    } while (next_permutation(per, per + N));

    // Output
    cout << ans;
}

// DISCLAIMER: This is NOT production-quality code.