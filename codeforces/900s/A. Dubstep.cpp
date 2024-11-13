// https://codeforces.com/problemset/problem/208/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string inStr;
    cin >> inStr;
    string outStr;

    int inStrLength = inStr.length();
    for (int i = 0; i < inStrLength;)
    {
        if (i < inStrLength - 2 && inStr[i] == 'W' && inStr[i + 1] == 'U' && inStr[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            outStr += inStr[i];
            i++;
        }
    }

    cout << outStr;
}

// strings