// https://codeforces.com/problemset/problem/579/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n)
    {
        ans += n & 1;
        n >>= 1;
    }

    cout << ans;
}