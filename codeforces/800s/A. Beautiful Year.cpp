// https://codeforces.com/problemset/problem/271/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int y;
    cin >> y;
    while (true)
    {
        y++;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y;
            return 0;
        }
    }
}