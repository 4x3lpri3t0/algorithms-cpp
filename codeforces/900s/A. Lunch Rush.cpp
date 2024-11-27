// https://codeforces.com/problemset/problem/276/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int f, t, joy, ans = INT_MIN;
    while (n--)
    {
        cin >> f >> t;
        joy = t <= k ? f : (f - (t - k));
        ans = max(ans, joy);
    }

    cout << ans;
}