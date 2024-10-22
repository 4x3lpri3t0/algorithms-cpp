// https://codeforces.com/problemset/problem/570/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;

    if (n == 1)
        cout << 1;
    else if (m > n / 2)
        cout << m - 1;
    else if (m < n)
        cout << m + 1;
    else
        cout << m;
}

// TODO