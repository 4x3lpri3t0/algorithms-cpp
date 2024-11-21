// https://codeforces.com/problemset/problem/254/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
using namespace std;

const int mm = 5001;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int>v[mm];
    int x;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x;
        v[x].push_back(i + 1);
    }

    for (int i = 0; i < mm; i++)
        if (v[i].size() % 2 == 1)
            Error;

    for (int i = 0; i < mm; i++)
    {
        if (v[i].size() == 0)
            continue;

        for (int j = 0; j < v[i].size(); j += 2)
            cout << v[i][j] << " " << v[i][j + 1] << endl;
    }
}

// constructive algorithms