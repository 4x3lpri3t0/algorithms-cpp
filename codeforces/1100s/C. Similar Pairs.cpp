// https://codeforces.com/problemset/problem/1360/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n], evens = 0, odds = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
            odds++;
        else
            evens++;
    }

    sort(a, a + n);

    bool consec = false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] + 1)
        {
            consec = true;
            break;
        }
    }

    string ans = consec || (odds % 2 == 0 && evens % 2 == 0) ? "YES" : "NO";
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

// greedy