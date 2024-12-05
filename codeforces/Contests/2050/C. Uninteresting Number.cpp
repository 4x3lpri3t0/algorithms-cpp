// https://codeforces.com/contest/2050/problem/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

// Divisibility Rule of 9: A number is divisible by 9 if the sum of its digits is divisible by 9.

bool canBeDivBy9(string s)
{
    int sum = 0, cnt2 = 0, cnt3 = 0;

    // Compute sum of digits and count 2s and 3s
    for (char c : s)
    {
        sum += (c - '0');
        if (c == '2')
            cnt2++;
        if (c == '3')
            cnt3++;
    }

    // Try to adjust the remainder using 2s and 3s
    for (int use2 = 0; use2 <= min(10, cnt2); use2++)
    {
        for (int use3 = 0; use3 <= min(10, cnt3); use3++)
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
        string s;
        cin >> s;
        cout << (canBeDivBy9(s) ? "YES" : "NO") << endl;
    }
}

// Math