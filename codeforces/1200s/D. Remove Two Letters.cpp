// https://codeforces.com/problemset/problem/1800/D
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = n - 1;
    // The same strings will be obtained if the characters with the numbers i and i+2 match.
    // (the char we're adding is the same one we're removing, hence the new string will be the same as the old one)
    for (int i = 1; i + 1 < n; i++)
    {
        if (s[i - 1] == s[i + 1])
            res--;
    }

    cout << res << endl;
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