// https://codeforces.com/problemset/problem/149/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Input
    int k;
    cin >> k;
    int n = 12; // months
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Solution
    sort(a, a + n, std::greater<int>()); // sort desc
    int wateredTotal = 0;
    int wateredCount = 0;
    for (int i = 0; i < 12; i++)
    {
        if (wateredTotal >= k)
            break;

        wateredTotal += a[i];
        wateredCount++;
    }

    // Output
    if (wateredTotal >= k)
        cout << wateredCount;
    else
        cout << -1;
}

// greedy
// sortings