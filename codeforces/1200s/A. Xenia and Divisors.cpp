// https://codeforces.com/problemset/problem/342/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; // Must form groups of 3 (n is divisible by 3)
    cin >> n;

    int x, f[8]; // Frequency of numbers (1 to 7)
    memset(f, 0, sizeof(f));
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        f[x]++;
    }

    // The valid cases are only (1, 2, 4), (1, 2, 6), (1, 3, 6). Then:
    // * There cannot be any prime numbers (5, 7)
    // * The amount of total 1s must be exacly n / 3
    // * The amount of 3s should be less or equal the amount of 6s
    // * The amount of 4s should be less or equal the amount of 2s
    // * The amount of (remainding) 6s should be equal the amount of (remainding) 2s
    if (f[5] + f[7] > 0 || f[1] != n / 3 || f[3] > f[6] || f[4] > f[2] || f[6] - f[3] != f[2] - f[4])
        Error;

    while (f[4]-- && f[2]--)
        puts("1 2 4");
    while (f[2]--)
        puts("1 2 6");
    while (f[3]--)
        puts("1 3 6");
}

// greedy