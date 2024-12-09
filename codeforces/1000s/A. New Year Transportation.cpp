// https://codeforces.com/problemset/problem/500/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    int i = 0;
    while (i < n - 1)
    {
        i += a[i];
        if (i == t - 1)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}

// implementation