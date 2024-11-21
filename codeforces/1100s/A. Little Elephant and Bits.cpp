// https://codeforces.com/problemset/problem/258/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int zIdx = 0; // First 0 index
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            zIdx = i;
            break;
        }
    }

    if (zIdx == 0)
        cout << str.substr(1, str.size() - 1);
    else
        cout << str.substr(0, zIdx) << str.substr(zIdx + 1, str.size() - zIdx);
}