// https://codeforces.com/problemset/problem/350/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int x, maxCorrect = INT_MIN, minWrong = INT_MAX;
    int minCorrect = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        maxCorrect = max(maxCorrect, x);
        minCorrect = min(minCorrect, x);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        minWrong = min(minWrong, x);
    }

    if (maxCorrect >= minWrong)
        Error;

    int minValid = minCorrect * 2;
    if (minValid <= maxCorrect)
    {
        cout << maxCorrect;
        return 0;
    }

    if (minValid >= minWrong)
        Error;

    cout << minValid;
    return 0;
}

// brute force
// greedy