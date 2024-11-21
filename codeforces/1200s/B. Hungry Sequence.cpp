// https://codeforces.com/problemset/problem/327/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int i = n + 1;
    while (n--)
    {
        cout << i << " ";
        i++;
    }
}

// math