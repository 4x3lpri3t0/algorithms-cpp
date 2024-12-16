// https://codeforces.com/problemset/problem/1490/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1'000'000'000'000L;

unordered_set<int> cubes;

void precalc()
{
    for (int i = 1; i * i * i <= N; i++)
        cubes.insert(i * i * i);
}

void solve()
{
    int x;
    cin >> x;
    for (int i = 1; i * i * i <= x; i++)
    {
        if (cubes.contains(x - i * i * i))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    precalc();

    int TC;
    cin >> TC;
    while (TC--)
        solve();
}

// !
// math
// https://codeforces.com/blog/entry/87874