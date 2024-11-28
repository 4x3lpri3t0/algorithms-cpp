// https://codeforces.com/problemset/problem/75/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int remove_zeroes(int n)
{
    int m = 0, mult = 1, d;
    while (n > 0)
    {
        d = n % 10;
        if (d)
        {
            m = (d * mult) + m;
            mult *= 10;
        }
        n /= 10;
    }

    return m;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b;
    c = a + b;

    if (remove_zeroes(a) + remove_zeroes(b) == remove_zeroes(c))
        cout << "YES";
    else
        cout << "NO";
}

// !