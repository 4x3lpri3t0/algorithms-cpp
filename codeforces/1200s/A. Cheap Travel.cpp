// https://codeforces.com/problemset/problem/466/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = 0;
    if (m * a <= b)
        ans = n * a;
    else
        ans = (n / m) * b + min((n % m) * a, b);

    cout << ans;
}