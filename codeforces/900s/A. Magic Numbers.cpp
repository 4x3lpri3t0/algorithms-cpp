// https://codeforces.com/problemset/problem/320/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    bool magicNumber = true;
    for (int i = 0; i < str.length();)
    {
        if (i < str.length() - 2 && str.substr(i, 3) == "144")
        {
            i += 3;
        }
        else if (i < str.length() - 1 && str.substr(i, 2) == "14")
        {
            i += 2;
        }
        else if (str[i] == '1')
        {
            i++;
        }
        else
        {
            magicNumber = false;
            break;
        }
    }

    cout << (magicNumber ? "YES" : "NO");
}