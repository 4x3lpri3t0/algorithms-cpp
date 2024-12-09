// https://codeforces.com/problemset/problem/579/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n)
    {
        ans += n & 1;
        n >>= 1;
    }

    cout << ans;
}