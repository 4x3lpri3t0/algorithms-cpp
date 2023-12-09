// https://codeforces.com/problemset/problem/459/B
// With sorting: https://codeforces.com/contest/459/submission/7460021
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxcount = 1;
    int mincount = 1;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < mini)
        {
            mincount = 1;
            mini = a;
        }
        else if (a == mini)
        {
            mincount++;
        }

        if (a > maxi)
        {
            maxcount = 1;
            maxi = a;
        }
        else if (a == maxi)
        {
            maxcount++;
        }
    }

    cout << maxi - mini << " ";

    if (maxi == mini)
        // Sum of "n" Consecutive Integers (1+2+3+...+n)
        cout << n * (n - 1) / 2;
    else
        cout << maxcount * mincount;
}