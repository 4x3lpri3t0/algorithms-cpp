// https://codeforces.com/problemset/problem/270/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, a;
    cin >> TC;
    while (TC--)
    {
        cin >> a;
        a = 180 - a;
        if (360 % a == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// geometry
// math
// !

/*
Consider all supplementary angles of the regular n-polygon with angle a, which are equal to 180-a.
Their sum is equal to 360, because the polygon is convex.

Then the following equality holds:
n * (180 - a) = 360, which means that there is an answer if and only if
360 mod (180 - a) = 0
*/