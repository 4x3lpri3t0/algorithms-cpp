// https://codeforces.com/problemset/problem/304/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;

    // Euclid's formula: https://en.wikipedia.org/wiki/Pythagorean_triple#Generating_a_triple
    // (i and j are parameters of Euclid's formula, not the sides of the triangle themselves)
    for (int i = 1; 2 * i * i <= n; i++)
    {
        for (int j = i + 1; i * i + j * j <= n; j++)
        {
            // Opposite parity AND coprime
            if ((i & 1) + (j & 1) == 1 && gcd(i, j) == 1)
            {
                // int a = j * j - i * i;
                // int b = 2 * i * j;
                int c = i * i + j * j;
                // cout << a << " " << b << " " << c << endl;
                ans += n / c; // Scaling factor
            }
        }
    }

    cout << ans;
}

// math
// !