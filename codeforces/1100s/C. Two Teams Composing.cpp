// https://codeforces.com/problemset/problem/1335/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt[n + 1];
    memset(cnt, 0, sizeof(cnt));

    int a[n];
    int tot = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        mx = max(mx, cnt[a[i]]);
        if (cnt[a[i]] == 1)
            tot++;
    }

    cout << min(tot, mx) - (tot == mx) << endl;
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