// https://codeforces.com/problemset/problem/160/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    sort(s.begin(), s.begin() + n);
    sort(s.begin() + n, s.end());

    bool more = true, less = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] <= s[n + i])
            more = false;
        if (s[i] >= s[n + i])
            less = false;
    }

    if (more || less)
        cout << "YES";
    else
        cout << "NO";
}

// greedy
// sortings