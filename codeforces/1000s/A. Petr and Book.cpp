// https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[7];
    for (int i = 0; i < 7; i++)
        cin >> a[i];

    int lastPageDay = -1;
    int currentDay = 1;
    while (lastPageDay < 0)
    {
        n -= a[currentDay - 1];
        if (n <= 0)
            lastPageDay = currentDay;

        currentDay++;
        if (currentDay > 7)
            currentDay = 1;
    }

    cout << lastPageDay;
}