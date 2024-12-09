// https://codeforces.com/problemset/problem/219/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    int k, freq[26];
    memset(freq, 0, sizeof(freq));
    string s;
    cin >> k >> s;

    // Input
    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 97]++;

    // Frequency
    for (int i = 0; i < 26; i++)
        if (freq[i] % k) // != 0
            return cout << -1, 0;

    // Outpout
    for (int i = 0; i < k; i++)
        for (int c = 26; c--;)
            for (int j = 0; j < freq[c] / k; j++)
                cout << (char)(c + 97);
}