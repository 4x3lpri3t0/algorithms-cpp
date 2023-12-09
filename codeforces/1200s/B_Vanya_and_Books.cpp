// http://codeforces.com/problemset/problem/552/B
// Tutorial: http://codeforces.com/blog/entry/18696
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    int total = 0;
    for (int t = 1; t <= n + 1; t *= 10)
    {
        total += n - (t - 1);
    }

    cout << total;
}

// for n < 10 answer will be n = n - 1 + 1  =  1 * (n + 1) - 1

// for n < 100 answer will be 2 * (n - 9) + 9 = 2 * n - 9  =  2 * n - 10 - 1 + 2  =  2 * (n + 1) - 11

// for n < 1000 answer will be 3 * (n - 99) + 2 * (99 - 9) + 9  =  3 * n - 99 - 9  =  3 * n - 100 - 10 - 1 + 3  =  3 *( n + 1) - 111