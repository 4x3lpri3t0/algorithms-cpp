// https://codeforces.com/contest/2050/problem/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, n;
    cin >> TC;
    while (TC--)
    {
        cin >> n;
        int a[n], total = 0, oddTotal = 0, evenTotal = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
            if ((i + 1) % 2 == 0)
                evenTotal += a[i];
            else
                oddTotal += a[i];
        }

        int oddCount = (n + 1) / 2;
        int evenCount = n / 2;

        int mean = (total + (n - 1)) / n;
        if (total % n == 0 && evenTotal / evenCount == mean && oddTotal / oddCount == mean)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// greedy
// math