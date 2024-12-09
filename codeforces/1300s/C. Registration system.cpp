// https://codeforces.com/problemset/problem/4/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<string, int> dict;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (dict.find(s) == dict.end())
        {
            dict[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            dict[s]++;
            cout << s << dict[s] << endl;
        }
    }
}

// data structures
// hashing