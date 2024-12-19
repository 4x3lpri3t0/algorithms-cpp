// https://codeforces.com/problemset/problem/82/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> friends = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

    int groupSize = 5;
    int currentGroupCapacity = groupSize; // Tracks total drinks served in the current group

    // Determine which round of doubling contains the number `n`
    while (n > currentGroupCapacity)
    {
        n -= currentGroupCapacity;
        currentGroupCapacity *= 2; // Each person drinks twice as much in the next round
    }

    // Determine which friend within the group is serving `n`
    int index = (n - 1) / (currentGroupCapacity / groupSize);

    cout << friends[index] << endl;
}
