// https://codeforces.com/problemset/problem/272/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        sum += cur;
    }

    int res = 0;
    for (int f = 1; f <= 5; f++)
    {
        if ((sum + (f - 1)) % (n + 1) != 0)
            res++;
    }

    cout << res;
}