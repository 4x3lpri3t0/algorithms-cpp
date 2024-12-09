// https://codeforces.com/problemset/problem/61/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1;
    cin >> str1;
    string str2;
    cin >> str2;

    string result = "";
    for (int i = 0; i < str1.size(); i++)
    {
        int bit1 = str1[i] - '0';
        int bit2 = str2[i] - '0';
        int xorResult = bit1 ^ bit2;
        result += to_string(xorResult);
    }

    cout << result;
}