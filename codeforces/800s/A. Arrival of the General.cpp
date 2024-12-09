// https://codeforces.com/problemset/problem/144/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int minValue = INT_MAX, maxValue = INT_MIN;
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur <= minValue) // Track the last occurrence of the minimum value
        {
            minValue = cur;
            minIndex = i;
        }
        if (cur > maxValue) // Track the first occurrence of the maximum value
        {
            maxValue = cur;
            maxIndex = i;
        }
    }

    // Output the result, adjusting if maxIndex is before minIndex
    cout << maxIndex + (n - 1 - minIndex) - (maxIndex > minIndex ? 1 : 0) << '\n';
}