// https://codeforces.com/problemset/problem/1029/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;

    int input;
    vector<int> a;
    while (cin >> input)
        a.push_back(input);

    int totalMax = 1;
    int localMax = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] <= a[i - 1] * 2)
            localMax++;
        else
            localMax = 1;

        totalMax = max(localMax, totalMax);
    }

    cout << totalMax;
}

// dp
// greedy