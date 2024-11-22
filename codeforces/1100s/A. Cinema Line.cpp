// https://codeforces.com/problemset/problem/349/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<"NO";return 0;}
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x, c25 = 0, c50 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 25)
            c25++;
        else if (x == 50)
        {
            c25--;
            c50++;
        }
        else // 100
        {
            c25--;
            if (c50 != 0)
                c50--;
            else
                c25 -= 2;
        }

        if (c25 < 0)
            Error;
    }

    cout << "YES";
}

// greedy