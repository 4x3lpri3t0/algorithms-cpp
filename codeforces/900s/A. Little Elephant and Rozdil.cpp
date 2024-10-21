// https://codeforces.com/problemset/problem/205/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int repeated = false;
    int smallestValue = INT_MAX;
    int smallestIdx = -1;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur == smallestValue)
            repeated = true;
        else if (cur < smallestValue)
        {
            smallestValue = cur;
            smallestIdx = i;
            repeated = false;
        }
    }

    cout << (repeated ? "Still Rozdil" : to_string(smallestIdx + 1));
}