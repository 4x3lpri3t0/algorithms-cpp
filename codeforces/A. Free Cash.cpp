// https://codeforces.com/problemset/problem/237/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int h[n], m[n];
    cin >> h[0] >> m[0];

    int cur = 1, mx = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> h[i] >> m[i];

        if (h[i] == h[i - 1] && m[i] == m[i - 1])
        {
            cur++;
            mx = max(mx, cur);
        }
        else
        {
            cur = 1;
        }
    }

    cout << mx;
}