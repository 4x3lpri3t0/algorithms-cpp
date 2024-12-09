// https://codeforces.com/problemset/problem/546/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int ans = 0;
    int last = -1;
    for (int curr : a)
    {
        if (last >= curr)
        {
            int diff = last - curr + 1;
            curr += diff;
            ans += diff;
        }

        last = curr;
    }

    cout << ans;
}