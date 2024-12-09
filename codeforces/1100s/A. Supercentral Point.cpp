// https://codeforces.com/problemset/problem/165/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        cin >> a[i][1];
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        bool rightNe = false, leftNe = false, lowerNe = false, upperNe = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (a[j][0] > a[i][0] && a[j][1] == a[i][1])
                rightNe = true;
            else if (a[j][0] < a[i][0] && a[j][1] == a[i][1])
                leftNe = true;
            else if (a[j][0] == a[i][0] && a[j][1] < a[i][1])
                lowerNe = true;
            else if (a[j][0] == a[i][0] && a[j][1] > a[i][1])
                upperNe = true;
        }

        if (rightNe && leftNe && lowerNe && upperNe)
            result++;
    }

    cout << result;
}