// https://codeforces.com/problemset/problem/742/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;

    if (n == 0)
        cout << 1;
    else if (n % 4 == 1)
        cout << 8;
    else if (n % 4 == 2)
        cout << 4;
    else if (n % 4 == 3)
        cout << 2;
    else
        cout << 6;

    return 0;
}

// math

/*
Explanation:

8^1 = 8 → last digit is 8

8^2 = 64 → last digit is 4

8^3 = 512 → last digit is 2

8^4 = 4096 → last digit is 6

8^5 = 32768 → last digit is 8

(...)

So the last digits repeat every 4 cycles: 8, 4, 2, 6.
This is a common occurrence in modular arithmetic, where you are looking at the
remainders (or the last digits) after division.

The sequence of last digits of any base repeats in cycles when raised to increasing powers.
*/