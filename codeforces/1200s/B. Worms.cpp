// http://codeforces.com/problemset/problem/474/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int a[n];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        a[i] = (a[i - 1] + num);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;

        int l = 0;
        int r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (a[mid] >= q)
                r = mid;
            else
                l = mid;
        }

        cout << r << endl;
    }
}

// binary search