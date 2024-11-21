// https://codeforces.com/problemset/problem/43/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> freq;
    for (const char& letter : s1)
    {
        if (letter != ' ')
            freq[letter]++;
    }

    for (const char& letter : s2)
    {
        if (letter == ' ')
            continue;

        if (!freq[letter] || freq[letter] < 1)
        {
            cout << "NO";
            return 0;
        }

        freq[letter]--;
    }

    cout << "YES";
}