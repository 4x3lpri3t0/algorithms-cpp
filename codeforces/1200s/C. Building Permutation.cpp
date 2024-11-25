// https://codeforces.com/problemset/problem/285/C
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

    int left = 1;
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        int diff = abs(left - a[i]);
        ans += diff;
        left++;
    }

    cout << ans;
}

// greedy
// sortings