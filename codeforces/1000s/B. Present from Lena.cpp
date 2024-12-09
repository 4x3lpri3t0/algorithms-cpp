// https://codeforces.com/problemset/problem/118/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

void printLine(int n, int maxi)
{
    cout << std::string((n - maxi) * 2, ' ');
    for (int i = 0; i < maxi; i++)
        cout << i << " ";

    for (int i = maxi; i > 0; i--)
        cout << i << " ";

    cout << 0 << endl;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string ans;

    // top half (-n) + middle (0) + bottom half (+n)
    for (int i = -n; i <= n; i++)
    {
        printLine(n, n - abs(i));
    }
}

// constructive algorithms