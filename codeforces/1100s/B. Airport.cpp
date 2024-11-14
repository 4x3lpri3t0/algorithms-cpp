// https://codeforces.com/problemset/problem/218/B
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; // n = passengers in queue, m = planes in airport
    cin >> n >> m;

    int a[m];
    priority_queue<int> pqMax;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        pqMax.push(a[i]);
    }

    sort(a, a + m);

    int totalMax = 0, totalMin = 0;
    int minIndex = 0;
    while (n--)
    {
        // Max
        int currentMax = pqMax.top();
        pqMax.pop();
        totalMax += currentMax;
        currentMax--;
        if (currentMax != 0)
            pqMax.push(currentMax);

        // Min
        totalMin += a[minIndex];
        a[minIndex]--;
        if (!a[minIndex])
            minIndex++;
    }

    cout << totalMax << " " << totalMin << endl;
}

// priority queue