// https://codeforces.com/problemset/problem/296/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int freq[1001], x;
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] == 0)
            continue;

        if (n - freq[i] < freq[i] - 1)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}

// greedy
// math