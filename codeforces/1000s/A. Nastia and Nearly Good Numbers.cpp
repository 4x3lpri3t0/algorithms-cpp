// https://codeforces.com/problemset/problem/1521/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;
    while (TC--)
    {
        long long a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        cout << a << " " << a * b << " " << a * (b + 1) << "\n";
    }
}

// math, number theory