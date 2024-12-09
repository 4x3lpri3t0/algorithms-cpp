// https://codeforces.com/problemset/problem/59/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int lc = 0;
    int uc = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char cur = str[i];
        if (cur >= 'A' && cur <= 'Z')
            uc++;
        else
            lc++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        char cur = str[i];
        if (uc > lc)
            str[i] = toupper(cur);
        else
            str[i] = tolower(cur);
    }

    cout << str;
}