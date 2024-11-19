// https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>
#define int long long
#define For(i, n) for(int i = 0; i < n; i++)
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    For(i, n)
        cin >> a[i];

    int mx = *max_element(a, a + n);
    int mn = *min_element(a, a + n);
    if (mx == mn)
    {
        cout << 0 << " " << n * (n - 1) / 2; // e.g. input: [1, 1, 1, 1, 1]
        return 0;
    }

    int l = 0, r = 0;
    For(i, n)
    {
        l += (a[i] == mn);
        r += (a[i] == mx);
    }

    cout << mx - mn << " " << l * r;
    return 0;
}

// combinatorics