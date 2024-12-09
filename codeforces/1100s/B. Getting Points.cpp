// https://codeforces.com/contest/1902/problem/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p, l, t;
    cin >> n >> p >> l >> t;
    int noft = (n - 1) / 7 + 1;
    int wday = 2 * t + l;
    int ntd = min((p - 1) / wday + 1, ((noft + 1) / 2));
    int ptd = min(noft, ntd * 2) * t + ntd * l;

    if (p <= ptd)
        cout << n - ntd << endl;
    else
        cout << n - ntd - (p - ptd - 1) / l - 1 << endl;
}

main()
{
    int TC;
    cin >> TC;
    while (TC--)
        solve();
}

// !
// binary search
// greedy