// https://codeforces.com/problemset/problem/362/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);

    if (a[0] == 1 || a[m - 1] == n)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 2; i < m; i++)
    {
        if (a[i - 2] == a[i - 1] - 1 && a[i - 1] == a[i] - 1)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}