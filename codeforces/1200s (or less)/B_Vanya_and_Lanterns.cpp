// https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);

    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    // max distance from the left or right
    double maxDiff = max(a[0], l - a[n - 1]); 

    for (int i = 0; i < n - 1; i++)
    {
        // max distance between two lanterns
        maxDiff = max(maxDiff, (a[i + 1] - a[i]) / 2.0);
    }

    printf("%lf", maxDiff);
}