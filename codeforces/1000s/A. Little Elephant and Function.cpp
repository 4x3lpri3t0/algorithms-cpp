// https://codeforces.com/problemset/problem/221/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Answer for the problem is always of the following form: n, 1, 2, 3, ..., n-1
    cout << n << ' ';
    for (int i = 0; i < n - 1; i++)
        cout << i + 1 << ' ';
}

// math
// recursion