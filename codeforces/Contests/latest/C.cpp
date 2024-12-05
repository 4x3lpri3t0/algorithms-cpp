// https://codeforces.com/contest/2050/problem/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

// Math property: A number is divisible by 9 if the sum of its digits is divisible by 9.

bool canBeDivBy9(int n) {
    int sum = 0, count2 = 0, count3 = 0;

    // Compute sum of digits and count 2s and 3s
    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;
        sum = (sum + digit) % 9;
        if (digit == 2)
            count2++;
        else if (digit == 3)
            count3++;
    }

    // Try to adjust the remainder using 2s and 3s
    for (int use2 = 0; use2 <= count2; use2++)
    {
        for (int use3 = 0; use3 <= count3; use3++)
        {
            // Calculate the new sum after replacements
            int newSum = sum + use2 * 2 + use3 * 6; // diff between squares (2 -> 4, and 3 -> 9)
            if (newSum % 9 == 0)
                return true;
        }
    }

    return false;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        cout << (canBeDivBy9(n) ? "YES" : "NO") << endl;
    }
}

// TODO (WA)
// Math