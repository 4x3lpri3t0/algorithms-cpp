// https://codeforces.com/problemset/problem/260/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, n, i;
    cin >> a >> b >> n;

    // Find number that satisfies condition
    for (i = 0; i < 10; i++)
        if (!((10 * a + i) % b))
            break;

    if (i == 10) // Couldn't find it
        Error;

    a = 10 * a + i;
    cout << a;
    // All other numbers can be just be * 10
    for (i = 1; i < n; i++)
        cout << 0;
}

// math
// !