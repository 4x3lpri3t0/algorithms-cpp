// https://codeforces.com/problemset/problem/651/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    int a, b;
    cin >> a >> b;

    int total = 0;
    while (a > 0 && b > 0)
    {
        if (a == 1 && b == 1)
            break;

        if (a > b)
        {
            a -= 2;
            b++;
        }
        else
        {
            b -= 2;
            a++;
        }

        total++;
    }

    cout << total;
}