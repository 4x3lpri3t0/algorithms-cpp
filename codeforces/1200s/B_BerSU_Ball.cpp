// https://codeforces.com/problemset/problem/489/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // Sort
    sort(a, a + n);
    sort(b, b + m);

    // Solve with 2 pointers
    int pairs = 0;
    int aIdx = 0, bIdx = 0;
    while (aIdx < n && bIdx < m)
    {
        int A = a[aIdx];
        int B = b[bIdx];
        if (abs(A - B) <= 1)
        {
            pairs++;
            aIdx++;
            bIdx++;
        }
        else if (A > B)
        {
            bIdx++;
        }
        else
        {
            aIdx++;
        }
    }

    cout << pairs;
}