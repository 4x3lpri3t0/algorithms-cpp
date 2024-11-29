// https://codeforces.com/problemset/problem/459/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, x2, y1, y2, a = 0;
    cin >> x1 >> y1 >> x2 >> y2;

    a = abs(x1 - x2);
    if (a == 0)
        a = abs(y1 - y2);
    if (x1 == x2)
        cout << x1 + a << " " << y1 << " " << x1 + a << " " << y2;
    else if (y1 == y2)
        cout << x1 << " " << y1 + a << " " << x2 << " " << y2 + a;
    else if (abs(x2 - x1) == abs(y2 - y1))
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    else
        cout << -1;
}

// !