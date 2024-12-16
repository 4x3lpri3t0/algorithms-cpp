// 
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int ans = 0, k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    int power = 1;
    // Iterate over powers of k (k^n)
    while (power <= r2)
    {
        // Calculate valid range for x
        int min_x = max(l1, (l2 + power - 1) / power); // Ceiling of l2 / power
        int max_x = min(r1, r2 / power);
        if (min_x <= max_x)
            ans += max_x - min_x + 1; // Count valid x in range

        // Prepare next power of k
        if (power > r2 / k)
            break; // Avoid overflow
        power *= k;
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