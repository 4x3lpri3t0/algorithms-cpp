// https://codeforces.com/problemset/problem/433/B
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
    cin >> n;
    int v[n + 1], u[n + 1];
    v[0] = 0, u[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u, u + n);

    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
        u[i] += u[i - 1];
    }

    int type, l, r;
    cin >> m;
    while (m--)
    {
        cin >> type >> l >> r;

        if (type == 1)
            cout << v[r] - v[l - 1] << endl;
        else
            cout << u[r] - u[l - 1] << endl;
    }
}

// dp