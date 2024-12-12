// https://codeforces.com/problemset/problem/61/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    string ans = "";
    for (int i = 0; i < s1.size(); i++)
    {
        int bit1 = s1[i] - '0';
        int bit2 = s2[i] - '0';
        int xorResult = bit1 ^ bit2;
        ans += to_string(xorResult);
    }

    cout << ans;
}