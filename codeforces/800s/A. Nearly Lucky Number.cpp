// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            count++;
    }
    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
}