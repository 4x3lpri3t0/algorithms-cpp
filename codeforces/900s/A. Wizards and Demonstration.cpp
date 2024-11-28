// https://codeforces.com/problemset/problem/168/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;

    int reqPeople = ceil(n * (y * 0.01));
    cout << max(0, reqPeople - x);
}

// math