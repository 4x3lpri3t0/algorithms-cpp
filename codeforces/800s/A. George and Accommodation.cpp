// https://codeforces.com/problemset/problem/467/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, q, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q - p >= 2)
            ans++;
    }

    cout << ans;
}