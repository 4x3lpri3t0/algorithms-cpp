// 
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int ans = 0, temp = 0, m, a, b, c;
    cin >> m >> a >> b >> c;

    int row1 = min(m, a);
    ans += row1;
    if (row1 < m)
    {
        temp = min(m - row1, c);
        c -= temp;
        ans += temp;
    }
    int row2 = min(m, b);
    ans += row2;
    if (row2 < m)
    {
        temp = min(m - row2, c);
        c -= temp;
        ans += temp;
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