// https://codeforces.com/contest/1915/problem/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, n;
    cin >> TC;

    while (TC-- > 0)
    {
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        int num = sqrt(sum);
        if (num * num == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// !
// binary search