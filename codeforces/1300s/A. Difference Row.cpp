// https://codeforces.com/problemset/problem/347/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end(), greater<int>()); // sort desc
    sort(a.begin() + 1, a.end() - 1); // sort asc internally (comply with "lexicographically smallest sequence x" requirement)

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

// !
// constructive algorithms
// sortings