// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int current;
    cin >> current;
    n--; // Skip first
    int resultCount = 0, maxPoints = current, minPoints = current;
    while (n--)
    {
        cin >> current;
        if (current < minPoints)
        {
            minPoints = current;
            resultCount++;
        }
        else if (current > maxPoints)
        {
            maxPoints = current;
            resultCount++;
        }
    }

    cout << resultCount;
}