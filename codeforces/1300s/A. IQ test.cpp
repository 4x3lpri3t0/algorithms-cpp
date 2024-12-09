// https://codeforces.com/problemset/problem/25/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Init + populate vector
    int oddNumberIndex = -1;
    int odds = 0;
    int evenNumberIndex = -1;
    int evens = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Compute
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 1) // Odd
        {
            oddNumberIndex = i + 1;
            odds++;
        }
        else
        {
            evenNumberIndex = i + 1;
            evens++;
        }
    }

    // Output
    if (evens == 1)
        cout << evenNumberIndex << endl;
    else
        cout << oddNumberIndex << endl;
}