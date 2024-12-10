// https://codeforces.com/problemset/problem/1520/D
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int ans = 0, n, x;
    cin >> n;

    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x -= i;
        ans += a[x];
        a[x]++;
    }

    cout << ans << endl;
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
// data structures (map)
// hashing
// math