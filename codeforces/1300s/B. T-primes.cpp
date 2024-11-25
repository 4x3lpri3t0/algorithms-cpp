// https://codeforces.com/problemset/problem/230/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sqrt_lim = 1000001;

set<int> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (arr[i])
            continue;

        for (int j = i * i; j < sqrt_lim; j += i)
        {
            arr[j] = true;
        }
    }

    set<int> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            res.insert((int)i * i);
    }
    return res;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> sq(prime_squares());

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        if (sq.count(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// number theory
// !
// https://codeforces.com/blog/entry/5437