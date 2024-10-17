// https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

main()
{
    string str;
    cin >> str;

    string res = "";
    for (int i = 0; i < str.length();)
    {
        if (str[i] == '.')
        {
            res += "0";
            i++;
        }
        else // -
        {
            if (i < str.length() - 1 && str[i + 1] == '.') // -.
            {
                res += "1";
                i += 2;
            }
            else // --
            {
                res += "2";
                i += 2;
            }
        }
    }

    cout << res;
}