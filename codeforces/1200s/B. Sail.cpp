// https://codeforces.com/problemset/problem/298/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string wind;
    cin >> wind;

    int xDiff = ex - sx;
    int yDiff = ey - sy;
    for (int i = 0; i < t; i++)
    {
        if (xDiff == 0 && yDiff == 0)
        {
            cout << i;
            return 0;
        }

        char curWind = wind[i];
        if (curWind == 'E' && xDiff > 0)
            xDiff--;
        else if (curWind == 'S' && yDiff < 0)
            yDiff++;
        else if (curWind == 'W' && xDiff < 0)
            xDiff++;
        else if (curWind == 'N' && yDiff > 0)
            yDiff--;
    }

    if (xDiff == 0 && yDiff == 0)
        cout << t;
    else
        cout << -1;
}

// greedy