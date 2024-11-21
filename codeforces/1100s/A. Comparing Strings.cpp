// https://codeforces.com/problemset/problem/186/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }

    int diffCount = 0; // Should only differ by 0 or 2
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            diffCount++;
    }

    if (diffCount != 0 && diffCount != 2)
    {
        cout << "NO";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}