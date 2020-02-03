#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/problemset/problem/706/B
int32_t main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);

    int q;
    cin >> q;
    while (q--)
    {
        int money;
        cin >> money;

        // BS to get number of possible shops
        int lo = 0;
        int hi = n;
        int mid;

        while (lo < hi)
        {
            mid = (lo + hi) / 2;
            if (money >= a[mid])
                lo = mid + 1;
            else
                hi = mid;
        }

        cout << lo << endl;
    }
}