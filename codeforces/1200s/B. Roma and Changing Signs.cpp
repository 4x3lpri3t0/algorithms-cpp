// https://codeforces.com/problemset/problem/262/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int i = 0;
    while (i < n && a[i] <= 0 && k)
    {
        a[i] *= -1;
        i++;
        k--;
    }

    int sum = accumulate(a, a + n, 0);
    // Leftover op? Only care if odd, otherwise can be cancelled out by multiplying same number (x*-1) twice.
    k = k & 1;
    if (k)
    {
        int mn = *min_element(a, a + n);
        sum -= 2 * mn; // Subtract twice the smallest number to effectively flip its sign and adjust the sum.
    }
    cout << sum;
}

// !
// greedy