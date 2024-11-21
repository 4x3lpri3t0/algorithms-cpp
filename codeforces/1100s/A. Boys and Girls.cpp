// https://codeforces.com/problemset/problem/253/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int b, g;
    cin >> b >> g;

    if (g > b)
    {
        printf("G");
        g--;
    }
    while (b || g)
    {
        if (b)
        {
            printf("B");
            b--;
        }
        if (g)
        {
            printf("G");
            g--;
        }
    }
}

// greedy