// https://codeforces.com/problemset/problem/433/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x, ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 100)
            ones++;
        else
            twos++;
    }

    if (ones % 2 == 1) // Odd one out
    {
        cout << "NO";
        return 0;
    }

    if (twos % 2 == 1) // 200w apple leftover
    {
        if (ones >= 2)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}