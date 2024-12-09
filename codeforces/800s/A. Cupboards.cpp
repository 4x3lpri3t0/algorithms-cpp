// https://codeforces.com/problemset/problem/248/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int lOpen = 0, lClosed = 0, rOpen = 0, rClosed = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
            lOpen++;
        else
            lClosed++;
        if (r == 0)
            rOpen++;
        else
            rClosed++;
    }

    cout << min(lOpen, lClosed) + min(rOpen, rClosed);
}