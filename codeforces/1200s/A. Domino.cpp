// https://codeforces.com/problemset/problem/353/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a = 0, b = 0, ab = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x &= 1;
        y &= 1;
        if (x == y)
        {
            ab += x; // only if odd
            continue;
        }
        a += x;
        b += y;
    }

    if ((a + ab) % 2 == 0 && (b + ab) % 2 == 0)
        cout << 0 << endl;
    else if ((a + ab) % 2 != 0 && (b + ab) % 2 != 0 && (a || b))
        cout << 1 << endl;
    else
        cout << -1 << endl;
}

// math