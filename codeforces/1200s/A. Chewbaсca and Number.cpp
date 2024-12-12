// https://codeforces.com/problemset/problem/514/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < '5' || (i == 0 && s[i] == '9'))
            ans += s[i];
        else
            ans += to_string('9' - s[i]);
    }

    cout << ans;
}

// ! Read description carefully (should be a "positive" integer)
// -> '0' edge cases: 9, 91730629, etc
// greedy