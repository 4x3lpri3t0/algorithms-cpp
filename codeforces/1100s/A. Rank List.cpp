// https://codeforces.com/problemset/problem/166/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    // Store team data as pairs of {problems_solved, penalty_time}
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    // Sort teams based on the custom comparator
    sort(v.begin(), v.end(), comp);

    // Count the number of teams tied with the k-th team (O(n) complexity but negligible)
    cout << count(v.begin(), v.end(), v[k - 1]);
}

// sortings