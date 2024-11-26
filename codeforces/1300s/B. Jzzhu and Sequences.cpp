// https://codeforces.com/problemset/problem/450/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

main()
{
    int x, y, n, ans;
    cin >> x >> y >> n;

    int a[6] = { x - y, x, y, y - x, -x, -y }; // every 6 numbers are the same
    ans = a[n % 6] % MOD;
    if (ans < 0)
        ans += MOD;

    cout << ans;
}

// math
// !