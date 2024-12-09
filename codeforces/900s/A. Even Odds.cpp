// https://codeforces.com/problemset/problem/318/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int mid = (n + 1) / 2;
    if (k <= mid)
        cout << (k * 2) - 1;
    else
        cout << (k - mid) * 2;
}