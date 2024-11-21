// https://codeforces.com/problemset/problem/239/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y, k, n;
    cin >> y >> k >> n;

    int x = k - y % k;
    if (y + x > n)
        Error;

    for (; x + y <= n; x += k)
        cout << x << " ";
}

// greedy