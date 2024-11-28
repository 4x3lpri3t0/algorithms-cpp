// https://codeforces.com/problemset/problem/456/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Store laptops as pairs of {price, quality}
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    // Sort based on price (asc)
    sort(v.begin(), v.end());

    int maxquality = v[0].second;
    for (int i = 0; i < n; i++)
    {
        if (maxquality > v[i].second)
        {
            cout << "Happy Alex";
            return 0;
        }
        maxquality = max(maxquality, v[i].second);
    }


    cout << "Poor Alex";
    return 0;
}