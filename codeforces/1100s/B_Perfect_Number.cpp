// https://codeforces.com/problemset/problem/919/B
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
    int ans = 0;
    while (num)
    {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

main()
{
    int k, n;
    cin >> k;

    for (n = 19; k > 0; n += 9)
    {
        if (sumOfDigits(n) == 10)
            k--;
    }

    cout << n - 9;
}