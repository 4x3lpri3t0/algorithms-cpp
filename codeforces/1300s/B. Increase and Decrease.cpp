// https://codeforces.com/problemset/problem/246/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    if (sum % n == 0)
        cout << n;
    else
        cout << n - 1;
}

// math
// !