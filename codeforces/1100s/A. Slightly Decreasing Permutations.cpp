// https://codeforces.com/problemset/problem/285/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n - k - 1; i++)
        cout << i + 1 << " ";

    for (int i = 0; i <= k; i++)
        cout << n - i << " ";
}

// greedy