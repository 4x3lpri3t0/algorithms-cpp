// https://codeforces.com/problemset/problem/115/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[2001], maxi, res = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        int j = i;
        maxi = 0;
        while (j != -1)
        {
            maxi++;
            j = a[j];
        }
        res = max(res, maxi);
    }

    cout << res;
}

// Alt: https://codeforces.com/contest/115/submission/2872871