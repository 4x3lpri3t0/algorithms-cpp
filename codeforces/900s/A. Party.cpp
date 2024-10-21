// https://codeforces.com/problemset/problem/115/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[2001], depth, maxDepth = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        int j = i;
        depth = 0;
        // Alternative to DFS:
        while (j != -1)
        {
            depth++;
            j = a[j];
        }
        maxDepth = max(maxDepth, depth);
    }

    cout << maxDepth;
}

// Alt: https://codeforces.com/contest/115/submission/2872871