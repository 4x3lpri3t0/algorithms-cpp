// https://www.codingame.com/ide/puzzle/staircases
#include <bits/stdc++.h>
#define int long long
using namespace std;

int countStaircases(int N)
{
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;
    for (int s = 1; s <= N; ++s)
    {
        for (int b = 0; b <= N; ++b)
        {
            dp[s][b] = dp[s - 1][b];
            if (b >= s)
                dp[s][b] += dp[s - 1][b - s];
        }
    }

    return dp[N][N] - 1; // Subtract 1 to exclude staircases with fewer than 2 steps
}

main()
{
    int N;
    cin >> N;
    cout << countStaircases(N) << endl;
}

// dp