// https://codeforces.com/problemset/problem/92/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int i = 1;
    while (m > 0)
    {
        if (m < i)
            break;

        m -= i;
        i = (i % n) + 1;
    }

    cout << m;
}