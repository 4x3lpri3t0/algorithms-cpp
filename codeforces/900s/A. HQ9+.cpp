// https://codeforces.com/problemset/problem/133/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> instructions = { 'H', 'Q', '9' };

    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (instructions.count(str[i]))
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}