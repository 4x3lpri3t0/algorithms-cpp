// https://codeforces.com/problemset/problem/1366/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int ans = 0, a, b, mn, mx;
    cin >> a >> b;

    cout << min((a + b) / 3, min(a, b)) << endl;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int TC;
    cin >> TC;
    while (TC--)
        solve();
}

// !
// math
// https://codeforces.com/blog/entry/78735