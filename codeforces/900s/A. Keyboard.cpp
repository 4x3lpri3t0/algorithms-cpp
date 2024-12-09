// http://codeforces.com/contest/474/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";

    ios::sync_with_stdio(0);
    cin.tie(0);
    string dir;
    cin >> dir;

    string str;
    cin >> str;

    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        int idx = kb.find(str[i]);

        if (dir == "R")
            res += kb[idx - 1];
        else
            res += kb[idx + 1];
    }

    cout << res;
}